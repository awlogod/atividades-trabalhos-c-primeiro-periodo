#include <stdio.h>
#include <stdlib.h>

int printPares(int a, int b){
    int i;

    printf("Pares entre %d e %d:\n", a, b);
    for(i = a; i <= b; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int main(){
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printPares(a, b);

    return 0;
}