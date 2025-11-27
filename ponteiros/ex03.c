/*O que as linhas abaixo fazem?*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5, b = 12;
    int *p;
    int *q;
    p = &a;
    q = &b;
    int c = *p + *q;
    printf("a: %d, b: %d, c: %d, p: %d, q: %d\n", a, b, c, *p, *q);
    return 0;
}