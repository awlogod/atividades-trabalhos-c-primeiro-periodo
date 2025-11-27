/*Uma struct agrupa vários tipos de dados diferentes em uma única estrutura (como um “pacote”).*/
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    struct Aluno aluno1;

    printf("Nome: ");
    scanf("%s", aluno1.nome);

    printf("Idade: ");
    scanf("%d", &aluno1.idade);

    printf("Média: ");
    scanf("%f", &aluno1.media);

    printf("\nAluno: %s | Idade: %d | Média: %.2f\n",
           aluno1.nome, aluno1.idade, aluno1.media);

    return 0;
}
