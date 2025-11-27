#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[20], y[20], z[20];

    printf("Digite 20 numeros inteiros:\n");
    for(int i = 0; i < 20; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("Digite 20 numeros inteiros para o segundo vetor:\n");
    for(int i = 0; i < 20; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &y[i]);
    }
    
    for(int i = 0; i < 20; i++){
        z[i] = x[i] * y[i];
    }
    printf("Vetor resultante (produto dos elementos):\n");
    for(int i = 0; i < 20; i++){
        printf("%d ", z[i]);
        printf("(%d * %d = %d) ", x[i], y[i]);
    }
    printf("\n");
    return 0;
}