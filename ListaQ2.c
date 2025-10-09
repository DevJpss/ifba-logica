#include <stdio.h>

void main()
{
    float lado;
    float area;
    float perimetro;
    
    printf("Digite o Tamanho do lado\n");
    scanf("%f",&lado);
    
    area = lado * lado;
    perimetro = lado * 4;
    
    printf("Área: %.2f\n",area);
    printf("Perimetro: %.2f",perimetro);
   
}
