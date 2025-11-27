#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[15], i, n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if(n > 15){
        printf("Tamanho do vetor deve ser menor ou igual a 15.\n");
        return 1;
    }

    for(i = 0; i < n; i++){
        printf("Digite o valor do vetor x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n; i++){
        if(x[i] > 30){
            printf("O valor na posicao %d é maior que 30: %d\n", i, x[i]);
        }
    }
    return 0;
}