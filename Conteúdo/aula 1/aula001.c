#include <stdio.h>

int main(){
     int idade = 0;
     int ano = 0;
    float salario;
    char nome[30] = "";

printf("Informe sua idade e ano: ");
scanf("%d %d", &idade, &ano);
printf("voce tem: %d anos\n e estah em %d.\n" , idade, ano);

printf("informe seu salario: ");
scanf("%f", &salario);
printf("Seu salario eh de R$%.2f\n", salario);

printf("Qual seu nome?: ");
scanf(" %[^\n]", nome);
printf("Ola, %s", nome);

 return 0;
}

