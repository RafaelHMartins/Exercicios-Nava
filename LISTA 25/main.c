
/*25. Sabendo que a declara��o de
uma fun��o � char *strcpy(char *dest,
 const char *src), desenvolva esta
  fun��o.
*/
#include <stdio.h>
#include <stdlib.h>



char *strcpy(char* origem,char *destino){
	int i;
	for(i=0;origem[i]!='\0';i++)
		destino[i] = origem[i];

	destino[i] = '\0';

	return destino;

}




int main(int argc, char *argv[]) {

	char origem[50];
	char destino[50];

	printf("\nDigite uma palavra:");
	gets(origem);

	printf("\nDigite a palavra que sera substituida: ");
	gets(destino);

	printf("\nANTES: %s",destino);
	printf("\nDEPOIS: %s",strcpy(origem,destino));






}
