/* Vetores sao um agrupamento de dados*/

#include <stdio.h>
#include <stdlib.h>

int main() {                      // 0 1 2 3 4
    int vetor[5]; // [0,1,2,3,4]  [1,2,3,4,5]
    int i;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nValores armazenados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }   
}