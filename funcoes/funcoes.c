/* Uma função é, um bloco que executa uma determinada tarefa especifica. */
/* Funcoes globais sao, funcoes que estao fora de qualquer funcao local, ou seja, a main*/
#include <stdio.h>
#include <stdlib.h>


/*void minhaFuncaoGlobal(){ 
    printf("Esta e uma funcao global!\n");
}

int main(){
    minhaFuncaoGlobal();
    return 0; 

} */ 

/* void minhaFuncaoGlobal(char nome[]){
    printf("Ola, %s! Esta e uma funcao global!\n", nome);
}

int main(){
    char nome[30]; // [A,N,D,R,E, dkajdkajkdjakdjakd]
    printf("Digite seu nome: ");
    scanf("%s", nome);
    minhaFuncaoGlobal(nome);
    return 0;
} */

/*int minhaFuncaoGlobal(){
    return 10;
}

int main(){
    int valor = minhaFuncaoGlobal();
    printf("O valor retornado pela funcao global e: %d\n", valor);
    return 0;
} */

/*int minhaFuncaoGlobal(int a, int b){
    return a * b;
}

int main(){
    int resultado = minhaFuncaoGlobal(5,7);
    printf("Digite dois numeros inteiros: %d ", resultado);
    return 0;
} */

/* void dobrar(int *num) {
    *num = *num * 2; // Dobrar o valor apontado por num
}

int main() {
    int x = 10;
    printf("Valor antes de dobrar: %d\n", x);
    dobrar(&x); // Passa o endereco de valor
    printf("Valor depois de dobrar: %d\n", x);
    return 0;
} */ 