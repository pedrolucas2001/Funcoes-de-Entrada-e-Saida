#include <stdio.h>
#include <stdlib.h>

int main()
{

    char letra;
    char nome[80]; /*String*/

    printf("Digite uma letra: ");
    scanf("%c",&letra);

    fflush(stdin);  /*Limpar o buffer do teclado*/

    printf("Digite um nome:");
    gets(nome);

    printf("Letra digitada foi: %c \n",letra);
    printf("Nome digitado foi: %s \n",nome);


}
