//Maior Menor

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int idade=0;
    int op;
do{

    setlocale(LC_ALL,"portuguese");
    printf("\n<<<Maior ou menor de idade>>>\n");

    printf("\nInforme a sua idade: ");
    scanf("%i", &idade);

    printf("\nA sua idades é: %i          ", idade);

if(idade>=18)
{
    printf("Maior de idade\t");
}

else
{
    printf("Menor de idade\t");
}

    printf("\n\n\t Digite 1 para continuar:\t");
    printf("\n\t para sair digite qualquer techa:\t");

    scanf("%i", &op);
    system("cls");

}while(op==1);

return 0;
}
