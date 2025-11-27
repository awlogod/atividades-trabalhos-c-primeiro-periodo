#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor do vetor x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 10; i++){
        if(x[i] < 0){
            printf("O valor na posicao %d é negativo: %d\n", i, x[i]);
        } else {
            printf("O valor na posicao %d é positivo: %d\n", i, x[i]);
        }
    }
}