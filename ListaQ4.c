#include <stdio.h>

void main()
{
    float lado0,lado1,lado2;
    float area;
    float perimetro;
    
    printf("Digite o primeiro lado\n");
    scanf("%f",&lado0);
    printf("Digite o segundo lado\n");
    scanf("%f",&lado1);
    printf("Digite o terceiro lado\n");
    scanf("%f",&lado2);
    
    
    perimetro = lado0 + lado1 + lado2;
    

    printf("Perimetro: %.2f",perimetro);
   
}
