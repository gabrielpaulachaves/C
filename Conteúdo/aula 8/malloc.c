 #include <stdio.h>
 #include <stdlib.h>
 
int main(void){
       int *ponteiro;
        //malloc basicamente reserva um espaço da memoria enquanto o programa está rodando. Útil quando não sabemos de antemão quanto de memoria precisaremos
                                    //aqui, o sizeof pergunta quantos bytes um int ocupa e multiplica por 5, dando 20 bytes. Entao malloc(20), então malloc vai alocar 20 bytes de memoria.
       ponteiro = (int*) malloc(5 *sizeof(int));
       //o ponteiro ai nessa funcao está servindo apenas para apontar onde está o endereço e ajudando a colocar, baseado no endereço que ele guarda.
                                //aqui estamos calculando o tamanho
       if(ponteiro != NULL){
        int i;
        //aqui, basicamente esse for é para colocar valores nos espaços reservados na memoria que estao guardados nesse ponteiro
        for(i=0;i<5;i++){
            ponteiro[i]= i+1;
            printf("%d\n", ponteiro[i]);
        };
        free(ponteiro);

       }


    return 0;
}