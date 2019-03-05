#include <stdio.h>
#include <stdlib.h>
/*3. Faça um programa que imprima os 100
 primeiros pares. */
int main()
{
    int i, j=1;
    printf(" 100 primeiros numeros pares:");
    for(i=2; i<=200; i=i+2){

            printf("100 primeiros pares = %d / contador = %d\n",i, j++);

    }

    return 0;
}
