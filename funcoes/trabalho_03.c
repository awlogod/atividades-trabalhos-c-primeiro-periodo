#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 50
#define MAX_VENDAS 100

typedef struct prdt{
    char nome[51];
    int codigo;
    float preco;
    int quantidade_estoque;
}Produto;


typedef struct vnd{
    int codigo;
    Produto produto;
    int quantidade_vendida;
    float valor_total;
} Venda;

void cadastrarProduto(Produto produtos[], int *total_produtos) {
    if (*total_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }
    Produto p;
    printf("Nome do produto (max 50 caracteres): ");
    scanf(" %[^\n]", p.nome);

    int codigo_existente;
    do {
        printf("Codigo do produto (max 4 digitos): ");
        scanf("%d", &p.codigo);
        if (p.codigo < 0 || p.codigo > 9999) {
            printf("Código inválido! Digite um número entre 0 e 9999.\n");
            codigo_existente = 1;
            continue;
        }
        codigo_existente = 0;
        for (int i = 0; i < *total_produtos; i++) {
            if (produtos[i].codigo == p.codigo) {
                printf("Já existe um produto com esse código!\n");
                codigo_existente = 1;
                break;
            }
        }
    } while (p.codigo < 0 || p.codigo > 9999 || codigo_existente);

    printf("Preco de venda: ");
    scanf("%f", &p.preco);
    printf("Quantidade em estoque: ");
    scanf("%d", &p.quantidade_estoque);

    produtos[*total_produtos] = p;
    (*total_produtos)++;
    printf("Produto cadastrado com sucesso!\n");
}

void registrarVenda(Produto produtos[], int total_produtos, Venda vendas[], int *total_vendas) {
    if (*total_vendas >= MAX_VENDAS) {
        printf("Limite de vendas atingido!\n");
        return;
    }
    if (total_produtos == 0) {
        printf("Nenhum produto cadastrado!\n");
        return;
    }
    int codigo_produto, quantidade;
    printf("Digite o código do produto a ser vendido: ");
    scanf("%d", &codigo_produto);

    int encontrado = 0, indice_produto = -1;
    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo_produto) {
            encontrado = 1;
            indice_produto = i;
            break;
        }
    }
    if (!encontrado) {
        printf("Produto não encontrado!\n");
        return;
    }
    printf("Quantidade a ser vendida: ");
    scanf("%d", &quantidade);
    if (quantidade <= 0) {
        printf("Quantidade inválida!\n");
        return;
    }
    if (produtos[indice_produto].quantidade_estoque < quantidade) {
        printf("Estoque insuficiente!\n");
        return;
    }


    Venda v;
    v.codigo = *total_vendas + 1;
    v.produto = produtos[indice_produto];
    v.quantidade_vendida = quantidade;
    v.valor_total = produtos[indice_produto].preco * quantidade;


    produtos[indice_produto].quantidade_estoque -= quantidade;


    vendas[*total_vendas] = v;
    (*total_vendas)++;
    printf("Venda registrada com sucesso! Valor total: R$ %.2f\n", v.valor_total);

 
    if (produtos[indice_produto].quantidade_estoque == 0) {
        printf("Atenção: Produto '%s' está em falta no estoque!\n", produtos[indice_produto].nome);
    }
}

void listarProdutosDisponiveis(Produto produtos[], int total_produtos) {
    if (total_produtos == 0) {
        printf("Nenhum produto cadastrado!\n");
        return;
    }
    printf("\n=== Produtos Disponíveis ===\n");
    for (int i = 0; i < total_produtos; i++) {
        printf("Código: %d | Nome: %s | Preço: R$ %.2f | Estoque: %d\n",
               produtos[i].codigo, produtos[i].nome, produtos[i].preco, produtos[i].quantidade_estoque);
    }
}

void listarVendas(Venda vendas[], int total_vendas) {
    if (total_vendas == 0) {
        printf("Nenhuma venda registrada!\n");
        return;
    }
    printf("\n=== Lista de Vendas ===\n");
    for (int i = 0; i < total_vendas; i++) {
        printf("Venda %d | Produto: %s | Quantidade: %d | Valor total: R$ %.2f\n",
               vendas[i].codigo, vendas[i].produto.nome, vendas[i].quantidade_vendida, vendas[i].valor_total);
    }
}

void listarProdutosEmFalta(Produto produtos[], int total_produtos) {
    int encontrou = 0;
    printf("\n=== Produtos em Falta ===\n");
    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].quantidade_estoque == 0) {
            printf("Código: %d | Nome: %s | Preço: R$ %.2f\n",
                   produtos[i].codigo, produtos[i].nome, produtos[i].preco);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum produto em falta no momento.\n");
    }
}

void relatorioProdutoMaisVendido(Produto produtos[], int total_produtos, Venda vendas[], int total_vendas) {
    if (total_vendas == 0) {
        printf("Nenhuma venda registrada!\n");
        return;
    }
    int max_vendido = 0, indice = -1;
    for (int i = 0; i < total_produtos; i++) {
        int total = 0;
        for (int j = 0; j < total_vendas; j++) {
            if (vendas[j].produto.codigo == produtos[i].codigo) {
                total += vendas[j].quantidade_vendida;
            }
        }
        if (total > max_vendido) {
            max_vendido = total;
            indice = i;
        }
    }
    if (indice != -1) {
        printf("Produto mais vendido: %s (Código: %d) - Quantidade: %d\n", produtos[indice].nome, produtos[indice].codigo, max_vendido);
        printf("Vendas deste produto:\n");
        for (int j = 0; j < total_vendas; j++) {
            if (vendas[j].produto.codigo == produtos[indice].codigo) {
                printf("  Venda %d - Quantidade: %d\n", vendas[j].codigo, vendas[j].quantidade_vendida);
            }
        }
    }
}

void relatorioTotalVendasPorProduto(Produto produtos[], int total_produtos, Venda vendas[], int total_vendas) {
    if (total_vendas == 0) {
        printf("Nenhuma venda registrada!\n");
        return;
    }
    printf("\nTotal de vendas por produto:\n");
    for (int i = 0; i < total_produtos; i++) {
        int total = 0;
        for (int j = 0; j < total_vendas; j++) {
            if (vendas[j].produto.codigo == produtos[i].codigo) {
                total += vendas[j].quantidade_vendida;
            }
        }
        if (total > 0) {
            printf("Produto: %s (Código: %d) - Quantidade vendida: %d\n", produtos[i].nome, produtos[i].codigo, total);
        }
    }
}

void relatorioValorTotalObtido(Venda vendas[], int total_vendas) {
    if (total_vendas == 0) {
        printf("Nenhuma venda registrada!\n");
        return;
    }
    float valor_total = 0;
    printf("\nValor total obtido com as vendas:\n");
    for (int i = 0; i < total_vendas; i++) {
        printf("Venda %d | Código Produto: %d | Nome: %s | Valor: R$ %.2f\n",
               vendas[i].codigo, vendas[i].produto.codigo, vendas[i].produto.nome, vendas[i].valor_total);
        valor_total += vendas[i].valor_total;
    }
    printf("Valor total geral: R$ %.2f\n", valor_total);
}

void gerarRelatorios(Produto produtos[], int total_produtos, Venda vendas[], int total_vendas) {
    int opcao;
    do {
        printf("\n=== Relatórios ===\n");
        printf("1. Produto mais vendido\n");
        printf("2. Total de vendas por produto\n");
        printf("3. Valor total obtido com as vendas\n");
        printf("4. Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                relatorioProdutoMaisVendido(produtos, total_produtos, vendas, total_vendas);
                break;
            case 2:
                relatorioTotalVendasPorProduto(produtos, total_produtos, vendas, total_vendas);
                break;
            case 3:
                relatorioValorTotalObtido(vendas, total_vendas);
                break;
            case 4:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 4);
}

int menuPrincipal(Produto produtos[], int *total_produtos, Venda vendas[], int *total_vendas) {
    int opcao;
    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Cadastro de produto\n");
        printf("2. Registro de vendas\n");
        printf("3. Estoque\n");
        printf("4. Lista de vendas\n");
        printf("5. Lista de produtos em falta\n");
        printf("6. Gerar relatorios\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrarProduto(produtos, total_produtos);
                break;
            case 2:
                registrarVenda(produtos, *total_produtos, vendas, total_vendas);
                break;
            case 3:
                listarProdutosDisponiveis(produtos, *total_produtos);
                break;
            case 4:
                listarVendas(vendas, *total_vendas);
                break;
            case 5:
                listarProdutosEmFalta(produtos, *total_produtos);
                break;
            case 6:
                gerarRelatorios(produtos, *total_produtos, vendas, *total_vendas);
                break;
            case 7:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 7);
    return 0;
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int total_produtos = 0;
    Venda vendas[MAX_VENDAS];
    int total_vendas = 0;
    menuPrincipal(produtos, &total_produtos, vendas, &total_vendas);
    return 0;
}