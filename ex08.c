#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[8], i;

    for(i = 0; i < 8; i++){
        printf("Digite o valor do vetor x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    for(i = 0; i < 8; i++){
        if(x[i] > 30){
            printf("O valor na posicao %d é maior que 30: %d\n", i+1, x[i]);
        } else {
            printf("O valor na posicao %d é menor ou igual a 30: %d\n", i+1, x[i]);
        }
    }

    return 0;
}