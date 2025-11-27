#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veiculos {

    char marca[15], modelo[20];
    int ano;
    float preco;
} car;

int quantidade(car carros[], float preco, char marca[] ){
    for(int i = 0; i < 10; i++) {
        if (carros[i].preco < preco && strcmp(carros[i].marca, marca) == 0) {
            return i + 1; // Retorna a quantidade de carros que atendem aos critérios
        }
    }
    return 0; // Retorna 0 se nenhum carro atender aos critérios
}

int main(){
    car carros[10];
    float preco;
    char marca[15];

    // Leitura dos dados dos carros
    for(int i = 0; i < 10; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf("%s", carros[i].marca);
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", carros[i].modelo);
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        printf("Digite o preco do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    // Leitura dos critérios de pesquisa
    printf("Digite o preco maximo: ");
    scanf("%f", &preco);
    printf("Digite a marca: ");
    scanf("%s", marca);

    // Chamada da função quantidade
    int qtd = quantidade(carros, preco, marca);

    // Exibição do resultado
    if(qtd > 0) {
        printf("Quantidade de carros com preco menor que %.2f e marca %s: %d\n", preco, marca, qtd);
    } else {
        printf("Nenhum carro atende aos criterios especificados.\n");
    }

    return 0;
}

