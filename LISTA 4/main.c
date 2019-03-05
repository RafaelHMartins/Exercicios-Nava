#include <stdio.h>
#include <stdlib.h>
/*4. Imprima os múltiplos de 5 do
 intervalo entre 1 e 500*/
int main()
{   int i, j=1;
    printf("multiplos de 5 do intervalo entre 1 e 500");
    for(i=5; i<=500; i=i+5){

            printf("i = %d / j = %d\n",i, j++);

    }
    return 0;
}
