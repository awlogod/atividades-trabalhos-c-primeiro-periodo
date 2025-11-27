#include <stdio.h>
#include <stdlib.h>
#define tam 15


int main(){
    int x[tam], i;

    printf("Digite os valores do vetor x:\n");
    for(i = 0; i < tam; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    if(x[i] % 2 == 0){
        printf("Os valores pares do vetor x são:\n");
        for(i = 0; i < tam; i++){
            if(x[i] % 2 == 0){
                printf("x[%d] = %d\n", i, x[i]);
            }
        }
    }
}