#include <stdio.h>
#include <stdlib.h>
/*21. Crie um programa aonde o usu�rio
 digita n n�meros e seu fatorial �
 impresso. O programa termina quando
  um n�mero menor que 1 � digitado. */
int fatorial(int a)
{ int i=0, x=0;
  x=a;

  for(i=a-1; i>=1; i--){
     x=x*i;

  }
return x;
}
int main()
{   int fat=0;
    printf("digite o numero a ser fatorado\n");
     scanf("%d",&fat);

     printf("o fatorial eh: %d", fatorial(fat));
    return 0;
}
