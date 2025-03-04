#include <stdio.h>


int main(){
	int numero;
	int ataque1,ataque2,ataque3;
	int contadorataque = 0;
	int dano;
	printf("Ratata morrera sera exterminado se os ataques tiverem, um numero maior que 10 e um numero par\n");
	 printf ("Digite o ataque %d\n",contadorataque + 1);
	 scanf("%d",&ataque1);
	 contadorataque++;
	 printf ("Digite o ataque %d\n",contadorataque + 1);
	 scanf("%d",&ataque2);
	  contadorataque++;
	 printf ("Digite o ataque %d\n",contadorataque + 1);
	 scanf("%d",&ataque3);
	  contadorataque++;
	  dano = ataque1+ataque2+ataque3;
	     if (ataque1 == 0 || ataque2 == 0 || ataque3 == 0) {
        printf("Rattata nao foi derrotado!\n");
        printf("Seu dano foi %d!\n",dano);
        return 0;
    }
	  
	int par = (ataque1 % 2 == 0 || ataque2 % 2 == 0 || ataque3 % 2 == 0);
	int maior = (ataque1 > 10 || ataque2 > 10 || ataque3 > 10);
    if ( maior && par) {
        printf("Rattata foi derrotado!\n");
        printf("Seu dano foi %d!\n",dano);
    } else {
        printf("Rattata nao foi derrotado!\n");
        printf("Seu dano foi %d!\n",dano);
    }

    return 0;

}
