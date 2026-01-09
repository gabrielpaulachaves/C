#include <stdio.h>

int main (void){

    float v[5] = {50,40,30,20,10};
    int i;
    float s = 0;

    for(i=0;i<5;i++){
        s+= v[i];   /*aqui o i vai andando posição por posição, ele é o índice do vetor. Ele foi definido como 0 dentro do for, ou seja, é ele que vai representar o primeiro índice nesse vetor e ao passar do código, irá representar os próximos índices*/ 
    }

    printf("Resultado: %f\n", s/5);



    return 0;
}