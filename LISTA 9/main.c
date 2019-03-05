#include <stdio.h>
#include <stdlib.h>
/*9. Sabendo que uma polegada tem 2.54cm,
imprima uma tabela de conversão de
polegadas para centímetros para os
valores de 1 a 20 polegadas.*/
int main()
{    int i;
     float polegada = 2.54;

    for(i=1; i<=20; i++)
       printf("%d polegada(s) eh: %f\n",i, polegada*i);


    return 0;
}
