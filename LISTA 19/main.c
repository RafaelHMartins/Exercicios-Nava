#include <stdio.h>
#include <stdlib.h>
/*19. Ler N n�meros e imprimir
quantos foram entre100e 200.
 Quando o n�mero zero for digitado
  o programa para. */
int main()
{   int num, soma=0;
do{
    printf("digite os numeros");
     scanf("%d",&num);
    if (num > 100 && num < 200)
       soma +=1;

}while(num != 0);
    printf("a quantidade de numeros digitados foi: %d\n",soma);
    return 0;
}
