/*A conjectura de Collatz é uma conjectura matemática que recebeu este nome em referência ao matemático
alemão Lothar Collatz, que foi o primeiro a propô-la, em 1937. Esta conjectura aplica-se a qualquer número
natural inteiro, e diz-nos para, se este número for par, o dividir por 2; e se for ímpar, para multiplicá-lo por 3
e adicionar 1. Desta forma, por exemplo, se a sequência iniciar com o número 5 ter-se-á: 5; 16; 8; 4; 2; 1. A
conjectura apresenta uma regra dizendo que, qualquer número natural inteiro, quando aplicado a esta
regra, eventualmente sempre chegará a 4, que se converte em 2 e termina em 1. Essa sequência em
questão também pode ser chamada de Números de Granizo ou Números Maravilhosos. A explicação destes
últimos nomes está em "como o granizo nas nuvens antes de cair, os números saltam de um lugar ao outro
antes de chegar ao 4, 2, 1".
Escreva um programa em C, que calcule quantos números são necessários para que um número inteiro chegue
a 1 quando aplicada regra da conjectura de Collatz. Por exemplo, caso o número informado seja 5, a saída
deverá ser 6 (5, 16, 8, 4, 2 e 1)*/
#include <stdio.h>
#define TAM 100

int main (){
	int numero,i=1,j,t,quantnum=0;
	int vetor[TAM];
	t=0;
	printf("Digite um numero");
	scanf("%d ",&numero);
	vetor[t] = numero;
	while (numero!=1){
	if (numero%2==1){
		numero=(numero*3)+1;
		vetor[i]=numero;
		i++;
	} else if (numero%2==0){
		numero=numero/2;
		vetor[i]=numero;
		i++;
	}
	
	}
	for(j=0;j<i;j++){
		printf("%2d",vetor[j]);
		quantnum++;
			
	}
	printf("\nQuantidade de numero fodas %d",quantnum);

}
