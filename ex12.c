#include <stdio.h>
#include <stdlib.h>
#define tam 20

int main(){
    char string[tam], letra;
    int i, cont = 0;

    printf("Digite uma palavra: ");
    fgets(string, tam, stdin);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for(i = 0; i < tam && string[i] != '\0'; i++){
        if(string[i] == letra){
            cont++;
        }
    }
    if(cont > 0){
        printf("A letra '%c' aparece %d vezes na palavra '%s'.\n", letra, cont, string);
    } else {
        printf("A letra '%c' não foi encontrada na palavra '%s'.\n", letra, string);
    }
    return 0;
}