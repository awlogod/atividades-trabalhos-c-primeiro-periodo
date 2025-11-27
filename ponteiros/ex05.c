/*Verifique o programa abaixo. Encontre o seu erro
e corrija-o para que escreva o número 10 na tela*/

#include <stdio.h>

int main()
{
int x, *p, *q;
p = &x;
q = p;
x = 10;
printf("\n%d\n", *q);
return(0);
}


/*#include <stdio.h>

A 2 erros, o &p e o &q, deve ser q = p e , *q

int main()
{
int x, *p, *q;
p = &x;
q = &p;
x = 10;
printf("\n%d\n", &q);
return(0);
}

*/