#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroDeficiente(int n) {
    int somaDivisores = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            somaDivisores += i;
        }
    }
    return somaDivisores < n;
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    if (numeroDeficiente(n)) {
        printf("%d eh um numero deficiente.\n", n);
    } else {
        printf("%d nao eh um numero deficiente.\n", n);
    }

    return 0;
}