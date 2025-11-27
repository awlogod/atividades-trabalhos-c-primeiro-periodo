#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, n, i, k, mult;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    x = (int*)malloc(n * sizeof(int));
    
    for(i = 0; i < n ; i++){
        printf("Digite os valores do vetor x: ");
        scanf("%d", &x[i]);
    }
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    mult = k * x[n-1];
    printf("O produto de %d e %d eh: %d\n", k, x[n-1], mult);
}