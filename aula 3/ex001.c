#include <stdio.h>


/*Estrutura de decisão*/
int main(void){


float nota;
printf("Digite sua nota: ");
scanf("%f", &nota);
if(nota >= 5){
    printf("Parabens, voce foi aprovado");
}else{
    printf("voce se fudeu");
}

    return 0;
}