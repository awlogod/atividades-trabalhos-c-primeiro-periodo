#include <stdio.h>
#include <stdlib.h>

int quad(int a, int b){
    int i;
    int somaQuadrado = 0;

    for(i = a; i <= b; i++){
        somaQuadrado += i * i;
    }
    return somaQuadrado;
}

int main(){
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    int resultado = quad(a, b);
    printf("A soma dos quadrados entre %d e %d eh: %d\n", a, b, resultado);
    return 0;
}

