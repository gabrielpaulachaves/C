#include <stdio.h>

/*Calculando a média do aluno*/

int main(void){

    double nota1 = 0;
    double nota2 = 0;
    double simulado = 0;
    double media;

    printf("Qual foi a sua nota da primeira prova? (0 a 4)\n");
    scanf("%lf", &nota1);
    printf("Qual foi a nota da segunda prova? (0 a 4)\n");
    scanf("%lf", &nota2);
    printf("Qual foi sua nota no simulado? (0 a 2)\n");
    scanf("%lf", &simulado);

    media = nota1 + nota2 + simulado;


    if(media >= 6){
        printf("Voce foi aprovado com %.1lf\n", media);
    }else{
        printf("Voce reprovou com %.1lf\n", media);
    }

    return 0;
}