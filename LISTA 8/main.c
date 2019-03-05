#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*8. Entrar com 15 números e imprimir
 a raiz quadrada de dada um deles.
*/
int main()
{   float raiz=0, result=0;
    int i;
for(i=0; i<=15; i++){
printf("digite o valor da raiz\n");
 scanf("%f",&raiz);
 result = sqrt(raiz);
 printf("valor da raiz eh %f\n",result);
}

    return 0;
}
