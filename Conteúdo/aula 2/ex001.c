#include <stdio.h>

#define texto "Entrada e saida de dado"
/*Estrutura de decisão*/
int main(void){

printf("%s\n", texto);

float nota;
printf("Digite sua nota: ");
scanf("%f", &nota);
if(nota >= 5){
    printf("Parabens, voce foi aprovado");
}else{
    printf("voce reprovou");
}

    return 0;
}