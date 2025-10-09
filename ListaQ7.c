#include <stdio.h>

void main()
{
    int idade;
    int anos,meses,dias;
    int bisexto,diasbisexto;
    
    printf("Digite a idade\n");
    scanf("%d",&idade);
    
    
    
    anos = idade;
    meses = idade * 12;
    dias = idade * 365;
    bisexto = idade / 4;
    diasbisexto = (idade * 365) + bisexto;
    
    printf("Você tem %d anos de vida\n",anos);
    printf("Você tem %d meses de vida\n",meses);
    printf("Você tem %d dias de vida\n",dias);
    printf("Você tem %d dias de vida(considerando anos bisextos)\n",diasbisexto);
    
   
}
