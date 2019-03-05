#include <stdio.h>
#include <stdlib.h>
/*13. Entrar com 20números eimprimir
a soma dos números que os quadrados
sãomenores que 225.*/
int main()
{   int sair=5, num, soma=0, total=0;

do{
    printf("digite os %d\n",sair-=1);
     scanf("%d",&num);
     soma = num*num;

     if (soma < 255)
       total=total+num;

}while(sair != 0);
printf("a soma dos numeros que sao menores que 255 eh: %d",total);
    return 0;
}
