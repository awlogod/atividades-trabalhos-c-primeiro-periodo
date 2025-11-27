#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        int resultado = fatorial(n);
        printf("O fatorial de %d eh: %d\n", n, resultado);
    }
    return 0;
}