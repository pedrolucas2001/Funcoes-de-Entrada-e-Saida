#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   int somar,subtrair,multiplicar,dividir,resto;

   printf("Digite o primeiro valor: ");
   scanf("%d",&a);
   printf("Digite o outro valor:");
   scanf("%d",&b);

   somar       =a+b;
   subtrair    =a-b;
   multiplicar =a*b;
   dividir     =a/b;
   resto       =a%b;

   printf("A soma foi.........: %d \n",somar);
   printf("A subtracao foi....: %d \n",subtrair);
   printf("A multiplicacao foi: %d \n", multiplicar);
   printf("A divisao foi......: %d \n" , dividir);
   printf("O resto foi .......: %d \n",resto);


    return 0;
}
