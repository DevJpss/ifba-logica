#include <stdio.h>
#define TAM 10

int main() 
{
	int i,j,t,aux,numeros[TAM];
    for(i=0;i<TAM;i++) //contador pa desgraca
	{
    	printf("Digite o %dº numero\n",i+1); //printando a mensagem pedindo o numero e armazenando no vetor
    	scanf("%d",&numeros[i]);
	}
	
	for(j=0;j<TAM;j++)
	    {
    	printf("    %2d\n",numeros[j]); //printando o vetor desordenado
        }
    for(i=0;i<TAM-1;i++) //double contador fodasse
          {
          	for (t=0;t<TAM-i-1;t++){
          		if (numeros[t]>numeros[t+1]){
          			aux=numeros[t];
          			numeros[t]=numeros[t+1];
          			numeros[t+1]=aux;
				  }
			  }
	      }
	      for(j=0;j<TAM;j++){ //printar o vetor ordenado
	      	printf("%2d\n",numeros[j]);
		  }

}