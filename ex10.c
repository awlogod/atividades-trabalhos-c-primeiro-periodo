#include <stdio.h>
#include <stdlib.h>

int main(){
    int y[20], x, i;

    for(i = 0; i < 20; i++){
        printf("Digite o valor do vetor y[%d]: ", i);
        scanf("%d", &y[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(i = 0; i < 20; i++){
        if(y[i] == x){
            printf("O valor %d foi encontrado na posicao %d do vetor y.\n", x, i);
            break;
        }
    }
}