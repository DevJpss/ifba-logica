#include <stdio.h>

void main()
{
    float nota1,nota2,nota3,nota4;
    float semestre;
    float bimestre1,bimestre2;
    
    printf("Digite as notas do primeiro bimestre\n");
    printf("Prova 1:  ");
    scanf("%f",&nota1);
    printf("Prova 2:  ");
    scanf("%f",&nota2);
    bimestre1 = (nota1 + nota2) / 2.0;
    printf("Nota final do Bimestre: %.2f\n",bimestre1);
    
    printf("Digite as notas do segundo bimestre\n");
    printf("Prova 3:  ");
    scanf("%f",&nota3);
    printf("Prova 4:  ");
    scanf("%f",&nota4);
    bimestre2 = (nota3 + nota4) / 2.0;
    printf("Nota final do Bimestre: %.2f\n",bimestre2);
    
    semestre = (bimestre1 + bimestre2) / 2.0;
    
    printf("A nota semestral do aluno foi %.2f",semestre);
     
}
