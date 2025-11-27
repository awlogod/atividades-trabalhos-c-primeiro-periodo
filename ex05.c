#include <stdio.h>
#include <stdlib.h>
#define tam 15


int main(){
    int x[tam], y[tam], i, soma[tam];

    for(i = 0; i < tam; i++){
        printf("Digite o valor do vetor x[%d]: ", i);
        scanf("%d", &x);
    }

    for(i = 0; i < tam; i++){
        printf("Digite o valor do vetor y[%d]: ", i);
        scanf("%d", &y);
    }

    for(i = 0; i < tam; i++){
        soma[i] = x[i] + y[i];
    }
    printf("A soma dos valores dos vetores x e y eh:\n");
    for(i = 0; i < tam; i++){
        printf("soma[%d] = %d\n", i, soma[i]);
    }
    return 0;
}