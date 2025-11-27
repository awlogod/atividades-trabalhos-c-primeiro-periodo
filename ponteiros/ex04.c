/*Seja o seguinte trecho de programa*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 3, b = 5;
    int *p, *q;
    p = &i;
    q = &b;

    /*Qual é o valor das seguintes expressões?*/
    int result1 = (p == &i);
    int result2 = (*p - *q);

    printf("i: %d, b: %d, p: %d, q: %d\n", i, b, *p, *q);
    printf("result1: %d, result2: %d\n", result1, result2);
}