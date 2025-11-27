#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

int main(){
    char nomeCompleto[tam];
    int i;

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, tam, stdin);
    printf("Iniciais: %c", toupper(nomeCompleto[0]));
    
    for(i = 1; i < (int)strlen(nomeCompleto); i++) {
        if(nomeCompleto[i-1] == ' ' && nomeCompleto[i] != ' ') {
            printf("%c", toupper(nomeCompleto[i]));
            printf("%c", toupper(nomeCompleto[i]));
        }
    }
    
    printf("\n");
    return 0;
}