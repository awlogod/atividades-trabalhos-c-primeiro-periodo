//Funcao void

#include <stdio.h> 
#include <stdlib.h>

void calculo(float n1, float n2, float n3){
    int x = n1, y = n2, z = n3;
    float resultado = (x * x) + y + z;
    printf("Resultado: %.2f\n", resultado);
}

int main(){
    float n1, n2, n3;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);
    printf("Digite o valor de n2: ");
    scanf("%f", &n2);
    printf("Digite o valor de n3: ");
    scanf("%f", &n3);

    calculo(n1, n2, n3);

    return 0;
}