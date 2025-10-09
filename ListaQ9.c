#include <stdio.h>

void main()
{
    float volume,raio,altura;
    
    printf("Digite o raio da lata de óleo: ");
    scanf("%f",&raio);
    printf("Digite o altura da lata de óleo: ");
    scanf("%f",&altura);
    
    volume = 3.14 * (raio * raio) * altura;
    
    printf("Seu volume é: %.2f\n",volume);
}
