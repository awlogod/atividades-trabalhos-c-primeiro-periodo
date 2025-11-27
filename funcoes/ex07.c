/*Elabore uma funcao recursiva que conte quantas vezes um digito especifico( de 0 a 9,
, fornecido pelo módulo chamador) aparece em um número inteiro positivo*/

#include <stdio.h>
#include <stdlib.h>

int contarDigito(int num, int digito) {
    if (num == 0) {
        return 0;
    }
    int count = (num % 10 == digito) ? 1 : 0;
    return count + contarDigito(num / 10, digito);
}

int main(){
    int num, digito;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("Digite o digito que deseja contar (0-9): ");
    scanf("%d", &digito);

    if (num < 0 || digito < 0 || digito > 9) {
        printf("Entrada invalida. Por favor, digite um numero inteiro positivo e um digito entre 0 e 9.\n");
        return 1;
    }

    int resultado = contarDigito(num, digito);
    printf("O digito %d aparece %d vezes no numero %d.\n", digito, resultado, num);

    return 0;
}