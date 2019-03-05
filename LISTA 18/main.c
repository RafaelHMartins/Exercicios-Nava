#include <stdio.h>
#include <stdlib.h>
/*18. Entrar com números enquanto
forem positivos e imprimir quantos
foram digitados. */
int main()
{   int num=0, qtd=0;
do{
   qtd+=1;
    printf("digite os numeros\n");
     scanf("%d",&num);

}while(num >= 0);
   printf("foram digitados %d numeros\n",qtd-1);
    return 0;
}
