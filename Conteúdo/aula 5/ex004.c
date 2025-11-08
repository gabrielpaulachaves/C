#include <stdio.h>


int main(void){

    char nome[41];

    printf("Seja Bem-vindo!, qual o seu nome?: ");
    scanf("%40[^\n]s", nome);
    fflush(stdin);

    printf("Ola, %s, voce eh o novo usuario!", nome);







    return 0;
}