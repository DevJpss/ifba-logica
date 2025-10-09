#include <stdio.h>

void main()
{
    float Celsius,Fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    Celsius = (5.0/9.0) * (Fahrenheit - 32.0);
    printf("Isso dá %.2f graus Celsius",Celsius);
   
}
