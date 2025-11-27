/*Elabore uma função, em C, calcule e imprima o
somatório dos N primeiros termos da série descrita
abaixo, onde N é um valor fornecido por parâmetro 500 - 5 * i/ 5* i*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

float somatorio(int n) {
    float soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += (500 - 5 * i) / (5 * i);
    }
    return soma;
}
int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }
    
    float resultado = somatorio(n);
    printf("O somatorio dos %d primeiros termos eh: %.2f\n", n, resultado);
    
    return 0;
}