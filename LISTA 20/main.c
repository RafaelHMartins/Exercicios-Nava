#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*20. Crie um programa aonde 10n�meros
 ser�o digitados ea raiz quadrada
 deles ser� impressa. Crie um
 mecanismo que n�o permita a digita��o
  de n�meros negativos.
*/
int main()
{   int num=0, fim=1;
    double raiz=0.0;

    do{
        printf("digite o %d numero\n",fim);
         scanf("%d",&num);
         if(num < 0){
            printf("voce digitou um numero negativo\n");
            fim-=1;
         }
         else{
             raiz = sqrt(num);
            printf("valor da raiz %f\n", raiz);
         }

      fim+=1;
    }while(fim <= 10);
    return 0;
}
