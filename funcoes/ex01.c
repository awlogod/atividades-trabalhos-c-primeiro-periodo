/*Elabore um programa onde as informações serão  armazenadas em uma estrutura cadastro que poode ser apelidade de cad
6 estruturas  terá as seguintes informações:
-Ra - inteiro
- nome - caracter com 30 posições
- nota - vetor de 2 posições do tipo float representando P1 e P2, respectivamente

O programa deverá ser constituído com a sseguintes funções:
1) Leitura das informações de 30 alunos
2) Função que retorna o aluno com a maior média aritmética
3) Função que retorna quais os alunos estão de recuperação
4) Verificar os RAS para ver se, não são iguais*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALUNOS 30

typedef struct {
    int ra;
    char nome[30];
    float nota[2];
} cad;

void lerAlunos(cad alunos[]) {
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("RA: ");
        scanf("%d", &alunos[i].ra);
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Nota P1: ");
        scanf("%f", &alunos[i].nota[0]);
        printf("Nota P2: ");
        scanf("%f", &alunos[i].nota[1]);
    }
}

cad maiorMedia(cad alunos[]) {
    float maiorMedia = 0;
    int indice = 0;
    
    for(int i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota[0] + alunos[i].nota[1]) / 2;
        if(media > maiorMedia) {
            maiorMedia = media;
            indice = i;
        }
    }
    return alunos[indice];
}

// Função para listar alunos em recuperação (média < 6)
void recuperacao(cad alunos[]) {
    printf("\nAlunos em recuperacao:\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota[0] + alunos[i].nota[1]) / 2;
        if(media < 6.0) {
            printf("RA: %d - Nome: %s - Media: %.2f\n", 
                   alunos[i].ra, alunos[i].nome, media);
        }
    }
}

int main() {
    cad alunos[NUM_ALUNOS];
    cad alunoMaiorMedia;
    
    lerAlunos(alunos);
    
    alunoMaiorMedia = maiorMedia(alunos);
    printf("\nAluno com maior media:\n");
    printf("RA: %d - Nome: %s - Media: %.2f\n", 
           alunoMaiorMedia.ra, 
           alunoMaiorMedia.nome, 
           (alunoMaiorMedia.nota[0] + alunoMaiorMedia.nota[1]) / 2);
    
    recuperacao(alunos);
    
    return 0;
}