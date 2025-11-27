#include <stdio.h>

/*int teste(char nome[], char ra[], char curso[]){
    printf("Nome: %s\n", nome);
    printf("RA: %d\n", ra);
    printf("Curso: %s\n", curso);
    return 0;
}

int main(){
    char nome[2];
    char ra[2];
    char curso[2];
   while(nome <= 2 && ra <= 2 && curso <= 2){
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu RA: ");
    scanf("%d", ra);
    printf("Digite seu curso: ");
    scanf("%s", curso);
   
   }
    teste(nome, ra, curso);
    return 0;
}*/

int teste(char nome[]){
    printf("Nome: %s\n", nome);
    return 0;
}

int main(){
    char nome[50];
    int m;
    scanf("%d", &m);
    while(m != 0 ){
        
    }
    printf("Digite seu nome: ");
    scanf("%s", nome);
    teste(nome);
    return 0;
}