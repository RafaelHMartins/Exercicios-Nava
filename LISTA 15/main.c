#include <stdio.h>
#include <stdlib.h>

int main()
{   char palavra[100];
    int i =0,j=0,cont=0;


   gets(palavra);
   cont = strlen(palavra);

    for(i=cont; i>=0;i--)
    {
       for(j=i;palavra[j]!='\0';j++)
          printf("%c",palavra[j]);
          printf("\n");

       }





    return 0;
}
