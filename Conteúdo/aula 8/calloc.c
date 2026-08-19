 #include <stdio.h>
 #include <stdlib.h>
 
int main(void){
       int *ponteiro;
                                    //aqui iremos colocar a quantidade que iremos usar, sem precisar calcular. No primeiro parametro, digo que quero quantidade X de elementos, com tamanho Y (segundo parametro) para cada elemento. Ou seja, ele serve para reservar memoria para a quantidade de X elementos que vc quiser. 
                                    //Na memoria, ele zera os bytes da memoria reservada, enquanto malloc utiliza um espeço que possui "lixo"
       ponteiro = (int*) calloc(5, sizeof(int));

       if(ponteiro != NULL){
        int i;
        for(i=0;i<5;i++){
                
            printf("%d\n", ponteiro[i]);
        };
        free(ponteiro);

       }


    return 0;
}