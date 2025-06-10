#include <stdio.h>
#define MAX 127

int main() {
   int VA;
   printf("Digite um valor\n");
   scanf("%d",&VA);
   if (VA<=MAX)
   {
       printf("%c",VA);
   }
   else if (VA>MAX)
   {
       printf("Digite um numero valido");
   }
    
    return 0;
}

