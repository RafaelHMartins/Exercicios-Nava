#include <stdio.h>
#include <stdlib.h>
/*21. Crie um programa aonde o usuário
 digita n números e seu fatorial é
 impresso. O programa termina quando
  um número menor que 1 é digitado. */
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
