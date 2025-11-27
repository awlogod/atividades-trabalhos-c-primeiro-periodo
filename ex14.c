#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 10

int main(){
    char string[tam];
    int i, j = 0;

    printf("Digite uma palavra: ");
    fgets(string, tam, stdin);

    for(i = 0; string[i] != '\0' && string[i] != '\n'; i++){
        if(!(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || 
           string[i] == 'o' || string[i] == 'u' || 
           string[i] == 'A' || string[i] == 'E' || 
           string[i] == 'I' || string[i] == 'O' || 
           string[i] == 'U')) {
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
    
    printf("Palavra sem vogais: %s\n", string);
    return 0;
}