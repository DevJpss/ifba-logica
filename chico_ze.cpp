//Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
//Construa um programa em C que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
#include <stdio.h>

int main() {
    float ac, az;
    int anos = 0;
    ac = 1.50;
    az = 1.10;
    
    while (az < ac) {
        az = az + 0.03; // Incrementa a altura de Zé
		ac = ac + 0.02; // Incrementa a altura de Chico
		anos++;
         
        printf("Altura de Zé: %.2f, Altura de Chico: %.2f\n", az, ac);
        
		
    }
    printf("Serao necessarios %d anos\n", anos);

    return 0;
}
