#include <stdio.h>
#include <stdlib.h>

void hipotenusa(float c1, float c2, float *r) {
    *r = (c1 * c1) + (c2 * c2);
    
}

int main(){
    float c1, c2;
    float resultado;
    
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &c1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &c2);
    hipotenusa(c1, c2, &resultado);
    printf("A hipotenusa eh: %.2f\n", resultado);
    return 0;
}