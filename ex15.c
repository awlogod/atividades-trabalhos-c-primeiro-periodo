#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

int main() {
    char palavra[TAM];
    int i, j, palindromo = 1;

    printf("Digite uma palavra: ");
    fgets(palavra, TAM, stdin);

    // Remove newline if present
    if(palavra[strlen(palavra)-1] == '\n') {
        palavra[strlen(palavra)-1] = '\0';
    }

    // Compare characters from start and end
    for(i = 0, j = strlen(palavra)-1; i < j; i++, j--) {
        if(palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    if(palindromo) {
        printf("A palavra %s eh um palindromo\n", palavra);
    } else {
        printf("A palavra %s nao eh um palindromo\n", palavra);
    }

    return 0;
}