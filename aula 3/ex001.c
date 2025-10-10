#include <stdio.h>

#define texto "Entrada e saida de dado"
/*Estrutura de decisão*/
int main(void){


float nota;
printf("%s\n", texto);
printf("Digite sua nota: ");
scanf("%f", &nota);
if(nota >= 5){
    printf("Parabens, voce foi aprovado");
}else{
    printf("voce reprovou");
}

    return 0;
}