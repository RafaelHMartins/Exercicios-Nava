#include <stdio.h>
#include <stdlib.h>
/*22. Faça um programa que verifica
se um número digitado é primo. */


int main() {

 int num=0, i=0, resultado = 0;

 printf("Digite um numero: ");
 scanf("%d", &num);

 for(i = 2; i <= num / 2; i++)
     if(num % i == 0)
       resultado+=1;



 if (resultado == 0)
    printf("%d e um numero primo\n", num);
 else
    printf("%d nao e um numero primo\n", num);

 return 0;
}
