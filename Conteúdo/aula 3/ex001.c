#include <stdio.h>

/*Condição*/
int main(){
 int idade;
 printf("Insira sua idade:\n ");
 scanf("%d", &idade);
   
    if(idade >= 1 && idade <= 12){
        printf("voce é criança menor de idade");
    }else if(idade >= 13 && idade < 18){
        printf("voce é um adolescente menor de idade");
    }else if(idade >= 18 && idade < 50){
        printf("voce é um adulto");
        if(idade >= 30 || idade <= 49){
            printf("voce deve ter muitas responsabilidades");
        }
    }else if(idade >= 50 && idade <= 80){
        printf("voce é idoso");
    }else if(idade > 80 && idade < 110){
        printf("Voce viveu muito! impressionante");     
    }else if(idade >= 130){
        printf("Voce ainda esta vivo?");
    }
return 0;
}