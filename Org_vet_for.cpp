#include <stdio.h>
#define TAM 10

int main(){
	int i,j,t,aux,numeros[TAM];
	int busca,esquerda,direita,meio,resultado=-1;
	for(i=0;i<TAM;i++){
		printf("Digite o %d numero\n",i+1);
		scanf("%d",&numeros[i]);
		if (numeros[i]<0){
			break;
		}
		
	}
	printf("Numeros desordenados no vetor\n");
	
	for (j=0;j<TAM;j++){
	printf("%2d",numeros[j]);	
	}
	
	printf("\nNumeros ordenados no vetor\n");
	
	
	for(t=0;t<TAM-1;t++){
		for(i=0;i<TAM-t-1;i++){
			if (numeros[i]>numeros[i+1]){
				aux=numeros[i];
				numeros[i]=numeros[i+1];
				numeros[i+1]=aux;
			}
			
		}
	}
	for(j=0;j<TAM;j++){
		printf("%2d",numeros[j]);
	}
	
	printf("\nDigite um numero a ser buscado\n");
	scanf("%d",&busca);
	esquerda=0;
	direita=TAM-1;
	while (esquerda<=direita){
		meio=esquerda +(direita-esquerda)/2;
		if (numeros[meio]==busca){
			resultado=meio;
			break;
		} else if (numeros[meio]<busca){
			esquerda=meio+1;
		} else {
			direita=meio-1;
		}
	}
	if (resultado!=-1){
		printf("Numero %d encontrado na posicao %d.\n",busca,resultado);
		
	}else {
		printf("Numero %d nao encontrado.\n",busca);
	}
	
	return 0;
}
