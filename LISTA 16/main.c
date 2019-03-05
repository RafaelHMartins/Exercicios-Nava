#include <stdio.h>
#include <stdlib.h>
/*16. Entre com uma frase e faça
a criptografia dela conforme a
seguinte regra: A → X, E → Y, I → W,   O → K e U→ Z */
int main()
{   char frase[10];
    int i=0, cont=0;
    printf("digite a frase\n");
    scanf("%s",&frase);
    cont=strlen(frase);

     for(i=0; i<=cont; i++){

        if(frase[i]=='a')
            frase[i]='x';

        if(frase[i]=='e')
            frase[i]='y';

        if(frase[i]=='i')
            frase[i]='w';

        if(frase[i]=='o')
            frase[i]='k';

        if(frase[i]=='u')
            frase[i]='z';

        if(frase[i]){

        printf("%c",frase[i]);
     }
     }



    return 0;
}
