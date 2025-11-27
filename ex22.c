#include <stdio.h>
#include <stdlib.h>

void rotacaoNumeros(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;
    
    printf("Digite tres numeros (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Antes da rotacao: %d %d %d\n", a, b, c);
    rotacaoNumeros(&a, &b, &c);
    printf("Depois da rotacao: %d %d %d\n", a, b, c);
    
    return 0;
}