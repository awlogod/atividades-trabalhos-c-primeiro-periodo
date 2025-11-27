/*O que as linhas abaixo fazem?*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 99, j;
    int *p;

    p = &i;
    j = *p + 100;
    printf("i: %d, j: %d, p: %d\n", i, j, *p);
}