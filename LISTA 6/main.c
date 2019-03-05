#include <stdio.h>
#include <stdlib.h>
/*6. Faça um programa que entre
com 10 números e imprima a metade
de cada um. */
int main()
{    int i;
     float j, result;

    for(i=1; i<=10; i++){
        printf("Digite o %d numeros, e aparecera a metade dele\n",i);
        scanf("%f",&j);
        printf("resultado = %f\n",
        result=j/2);
    }

    return 0;
}
