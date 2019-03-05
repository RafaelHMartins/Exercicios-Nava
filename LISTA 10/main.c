#include <stdio.h>
#include <stdlib.h>
/*10. Sabendoque a conversãode
Fahrenheit para Celsius
é 𝐶 = 5 × (𝐹 − 32) 9 , fa
ça um programa que pergunte o limite
 superior e o inferior e imprima uma
 tabela de conversão dentro deste
 limite.
*/
int main()
{   float f, c;
    int limiteA, limiteB;

    printf("digite o limite superior de Fahrenheit ");
     scanf("%d",&limiteA);
     printf("digite o limite inferior de Fahrenheit ");
     scanf("%d",&limiteB);
    int i;
     for(i=limiteB; i<=limiteA; i++)
     {
         c = 5 * (i - 32) /9 ;
         printf("Fahrenheit em %d = %f celcius\n",i,c);
     }

    return 0;
}
