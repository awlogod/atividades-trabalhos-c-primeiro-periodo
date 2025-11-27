#include <stdio.h>
int main()
{
int x, *r, **t;
r= &x;
t = &r; // ponteiro do ponteiro pode usar o &
x = 34;
printf("\n%d\n", &x); // printa o caminho alocado na memoria de x
printf("\n%d\n", x); // printa o valor de x
printf("\n%d\n", &r); // printa o caminho alocado na memoria de r
printf("\n%d\n", r); // printa o caminho alocado na memoria de x
printf("\n%d\n", *r); // printa o valor de x
printf("\n%d\n", &t);
printf("\n%d\n", t);
printf("\n%d\n", *t);
return(0);
}
