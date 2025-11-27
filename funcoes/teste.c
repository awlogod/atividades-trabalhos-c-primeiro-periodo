#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if( n < 1){
        printf("O numero deve ser maior que 0");
        return 1;
    }
      if( n > 9){
        printf("O numero deve ser menor que 9");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("*");
    }

    return 0;
}