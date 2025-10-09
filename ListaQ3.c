#include <stdio.h>

void main()
{
    float raio;
    float area;
    float perimetro;
    
    printf("Digite o Tamanho do raio\n");
    scanf("%f",&raio);
    
    area = 3.14 * (raio * raio);
    perimetro = (2 * 3.14) * raio;
    
    printf("Área: %.2f\n",area);
    printf("Perimetro: %.2f",perimetro);
   
}
