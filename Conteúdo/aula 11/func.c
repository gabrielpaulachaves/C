#include <stdio.h>

//void significa que a funcao retorna nada para quem chamou. Colocar void nos parenteses da function main deixa explicito que ela nao receberá parametros
int power(int m, int n); //declaraçao da funcao

int main(void){
    int i;
    for(i =1; i<=9; i++){
        printf("valor de i= %d, valor da function= %d\n", i, power(2, i));

    }
   
 return 0;
};

int power(int base, int n){ //definicao da funcao declarada acima. base e n sao copias que o main enviou no power(2, i) e power(-3, i)
    int i, p;
    p = 1;

    for(i = 1; i<=n; i++){
        p = p*base;
    };
    return p; //return para entregar para a power chamada la no main
};

