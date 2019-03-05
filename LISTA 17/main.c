#include <stdio.h>
#include <stdlib.h>
/*17. Crie um programa que receba
 a idade e o peso de 20 pessoas.
 Calcular e imprimir a média dos
  pesos da mesma faixa etária.
   As faixas etárias são: de 1 a 10
    anos, de 11 a 20 anos,
    de 21 a 30 anos e acima de 30.
*/

int main()
{   int idade=0, i=0,p;
    int peso[4]={0,0,0,0};
    int totalpeso1=0, totalpeso2=0, totalpeso3=0, totalpeso4=0;
    int soma[4]={0,0,0,0};

    for(i=0; i<=3; i++){
    printf("digite a idade da pessoa: %d\n",i);
     scanf("%d",&idade);
     printf("digite a peso da pessoa: %d\n",i);
        scanf("%d",&p);

     if(idade >= 1 && idade <=10){
        soma[0]+=1;
        peso[0] = p+peso[0];
        totalpeso1=peso[0]/soma[0];

     }
     if(idade >=11 && idade <=20){
       soma[1]+=1;
       peso[1] = p+peso[1];
        totalpeso2=peso[1]/soma[1];
     }
     if(idade >=21 && idade <=30){
        soma[2]+=1;
        peso[2] = p+peso[2];
        totalpeso3=peso[2]/soma[2];

     }
     if(idade >=31){
        soma[3]+=1;
        peso[3] = p+peso[3];
        totalpeso4=peso[3]/soma[3];

     }

    }

    printf("A media de peso das pessoas com idade entre 1 e 10 anos: %d\n",totalpeso1);
    printf("A media de peso das pessoas com idade entre 11 e 20 anos: %d\n",totalpeso2);
    printf("A media de peso das pessoas com idade entre 21 e 30 anos: %d\n",totalpeso3);
    printf("A media de peso das pessoas com idade acima de 30 anos: %d\n",totalpeso4);



    return 0;
}
