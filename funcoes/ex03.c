/*Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até
N em ordem crescente*/

#include <stdio.h>
#include <stdlib.h>

void printNumbers(int current, int N) {
    if(current > N) {
        return;
    }

    printf("%d ", current);
    
    printNumbers(current + 1, N);
}

int main() {
    int N;
    printf("Digite um numero positivo: ");
    scanf("%d", &N);
    
    if(N < 0) {
        printf("Por favor digite um numero positivo.\n");
        return 1;
    }
    
    printf("Numeros de 0 ate %d:\n", N);
    printNumbers(0, N);
    printf("\n");
    
    return 0;
}