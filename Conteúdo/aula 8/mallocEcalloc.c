 #include <stdio.h>
 #include <stdlib.h>
 
int main(void){
        int numero = 10;
       int *ponteiro = &numero; //esse & serve pra trazer o endereço de memoria, que guardamos em um ponteiro nao dinamico
 
        printf("endereço da variavel numero: %p\n", ponteiro);
        printf("valor da variavel pelo endereço: %d\n", *ponteiro);

        //auterando o valor da variavel pelo ponteiro, esse * serve pra isso
        *ponteiro = 20;
        printf("Novo valor auterado pelo ponteiro: %d\n", numero);
        printf("Seu endereço continua o mesmo?: %p\n", ponteiro);

        int *ponteirodinamico = malloc(sizeof(int));

        *ponteirodinamico = 50; //alocando valor dinamicamente
        printf("Valor dinamico adicionado: %d\n", *ponteirodinamico);

            //isso sao boas praticas do uso de ponteiro
        free(ponteirodinamico);
        ponteirodinamico = NULL;
        if(ponteirodinamico == NULL){
          printf("Ponteiro dinamico limpo!\n") ; 
        };
        
    return 0;
}