#include <stdio.h>

void main()
{
    float base;
    float area;
    float perimetro;
    
    printf("Digite o Tamanho da Base\n");
    scanf("%f",&base);
    printf("Digite a Altura\n");
    scanf("%f",&altura);
    
    area = base * altura;
    perimetro = (base + altura) * 2;
    
    printf("Área: %.2f\n",area);
    printf("Perimetro: %.2f",perimetro);
   
}
