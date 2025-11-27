/* Matrizes nada mais sao que, um conjuto de vetores que formam linhas e colunas*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int i, j; // i é a linha e o j é a coluna

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nValores armazenados na matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}