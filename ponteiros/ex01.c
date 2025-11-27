/*Quais serão os valores de x, y e p ao final do
trecho de código abaixo?*/
#include <stdio.h>

int main() {
	int x, y, *p;
	y = 0;
	p = &y;
	x = *p;
	x = 4;
	(*p)++;
	--x;
	(*p) += x;
	printf("x: %d, y: %d, p: %d\n", x, y, *p);
	return 0;
}
