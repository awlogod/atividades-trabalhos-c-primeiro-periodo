//Funcao retorn

#include <stdio.h>
#include <stdlib.h>

float calculo(float n1, float n2, float n3){
    int x = n1, y = n2, z = n3;

    return (x*x) + y + z;
}

int main(){
    float n1, n2, n3;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);
    printf("Digite o valor de n2: ");
    scanf("%f", &n2);
    printf("Digite o valor de n3: ");
    scanf("%f", &n3);

    float resultado = calculo(n1, n2, n3);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}