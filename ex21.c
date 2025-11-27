#include <stdio.h>
#include <stdlib.h>

void somaDivisores(int n){
    int i;
    int soma = 0;

    for(i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    printf("A soma dos divisores de %d eh: %d\n", n, soma);
}

int main(){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }
    somaDivisores(n);
    return 0;
}
