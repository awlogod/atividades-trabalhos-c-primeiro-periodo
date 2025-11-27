#include <stdio.h>
#include <stdlib.h>

float hipotenusa(float c1, float c2){
    float h = (c1 * c1) + (c2 * c2);
    return h;
}

int main(){
    float c1, c2;
    float resultado;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &c1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &c2);

    resultado = hipotenusa(c1, c2);
    printf("A hipotenusa eh: %.2f\n", resultado);
}