#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {

	char nome1[50];
	char nome2[50];
	int cont= 0;
	int i =0;
	int j=0;
	int k =0;
	int flag=0;
	gets(nome1);
	gets(nome2);




	printf(" %c %d\n",nome1[0],&nome1[0]);
	printf(" %c %d\n",nome1[1],&nome1[1]);
	printf(" %c %d\n",nome1[2],&nome1[2]);
	printf(" %c %d\n",nome1[3],&nome1[3]);
	printf(" %c %d\n\n\n",nome1[4],&nome1[4]);


	printf(" %c %d\n",nome2[0],&nome2[0]);
	printf(" %c %d\n",nome2[1],&nome2[1]);
	printf(" %c %d\n",nome2[2],&nome2[2]);
	printf(" %c %d\n",nome2[3],&nome2[3]);
	printf(" %c %d\n",nome2[4],&nome2[4]);




	while(nome1[i] != '\0'){


		if(nome1[i] == nome2[0])
		{
			for(j=0,k=i;j<=strlen(nome2)-1;j++,k++)
			{
				if(nome1[k] == nome2[j])
				{
					cont = cont + 1;
					if (cont == strlen(nome2))
					{
						printf("\n\nCONTEM - ENDERECO: %d",&nome1[k]-cont+1);
						flag=flag+1;
						break;
					}
				}
			}

		}
		if (cont == strlen(nome2))
		break;
		cont=0;
		i++;
	}
	    if(flag==0)
	     printf("NULL");
}
