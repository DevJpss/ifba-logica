#include <stdio.h>

void main()
{
    int numero0,numero1;
    int resto,quociente;
    
    printf("Digite o primeiro numero inteiro\n");
    scanf("%d",&numero0);
    printf("Digite o segundo numero inteiro\n");
    scanf("%d",&numero1);
    
    resto = numero0 % numero1;
    quociente = numero0 / numero1;
    
    printf("Quociente: %d ",quociente);
    printf("Resto: %d ",resto);
    
   
}
