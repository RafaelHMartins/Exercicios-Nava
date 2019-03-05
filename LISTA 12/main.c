#include <stdio.h>
#include <stdlib.h>
/*12. Crie um programa que leia a
 quantidade de números que serão
  digitados para que se possa imprimir
   qual é o maior e o menor deles. */
int main()
{   int i=0, num=0, maior=0, menor=0, fim;

    printf("quantas vezes deseja que o programa rode?");
     scanf("%d",&fim);

    for(i=0; i<fim; i++)
    {
       printf("digite os numeros");
        scanf("%d",&num);
       if(num > maior)
          maior = num;
       if(i == 0)
          menor = num;
        if(i != 0)
          if(num < menor)
          menor = num;
    }
       printf("maior %d, menor %d",maior,menor);
    return 0;
}
