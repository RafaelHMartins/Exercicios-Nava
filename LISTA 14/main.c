#include <stdio.h>
#include <stdlib.h>
/*14. Entrar com um nome e imprimir
quantas vezes forem o números de
seus caracteres.
*/
int main()
{   char nome[100];
    int cont;

    printf("digite o nome\n");
     scanf("%s",&nome);
      cont = strlen(nome);
      printf("O nome: %s tem %d letras\n", nome, cont);

    return 0;
}
