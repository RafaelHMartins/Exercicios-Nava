#include <stdio.h>
#include <stdlib.h>
/*1. Crie um programa que leia 5 números
 e imprima o quadrado deles.*/
int main()
{
    int num, result, i, j;
    for(i=1; i<=5; i++){
        printf("\ndigite o %d: ",i);
        scanf("%d",&num);
        result = num * num;
        printf("O quadrado do numero digitado e: %d\n", result);
    }
    return 0;
}
