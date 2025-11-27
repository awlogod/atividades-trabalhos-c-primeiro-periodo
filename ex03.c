#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i, soma, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if( n > 20){
        printf("Tamanho do vetor deve ser menor ou igual a 20.\n");
        return 1;
    }

    for(i = 0; i < n; i++){
        printf("Digite o valor do vetor x[%d]: ", i);
        scanf("%d", &x);
        if (i == 0) {
            soma = x; 
        } else {
            soma += x; 
        }
    }
    printf("A soma dos valores do vetor eh: %d\n", soma);
    return 0;
}