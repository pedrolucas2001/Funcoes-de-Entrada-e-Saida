#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    float nota1,nota2,nota3,nota4,media;

    printf("Digite o seu nome: ");
    gets(nome);

    fflush(stdin);

    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f",&nota1);
    printf("Digite a nota do segundo bimestre: ");
    scanf("%f",&nota2);
    printf("Digite a nota do terceiro bimestre: ");
    scanf("%f",&nota3);
    printf("Digite a nota do quarto bimestre: ");
    scanf("%f",&nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media final do aluno %s foi de %0.2f",nome,media);




    return 0;
}
