#include <stdio.h>

int main(void){

    int A, B, soma, mult, div;

    printf("digite o primeiro valor: \n");
    scanf("%d", &A);
    printf("digite o segundo valor: \n");
    scanf("%d", &B);

    soma = A + B;
    mult = A * B;
    div = A/B;

    printf("Resultados:\n");
    printf("soma: %d\n", soma);
    printf("multiplicacao: %d\n", mult);
    printf("divisao: %d\n", div);

    return 0;
}