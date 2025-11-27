/* Diagonak principal:
o,o ; ,1,1; 2,2; 3,3; 4,4*/

#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main(){
    int x[tam][tam], i, j;

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    printf("Diagonal principal:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(i == j){
                printf("%d ", x[i][j]);
            }
        }
    }
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if( x[i][j] == x[j][i]){
                printf("\nA matriz é simetrica, pois x[%d][%d] = x[%d][%d] = %d", i, j, j, i, x[i][j]);
            } else {
                printf("\nA matriz não é simetrica, pois x[%d][%d] = %d e x[%d][%d] = %d", i, j, x[i][j], j, i, x[j][i]);
            }
        }
    }
    return 0;
}