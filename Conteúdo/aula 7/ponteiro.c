 #include <stdio.h>

int main(void){
    int numero = 10;
    int *ponteiro; 
    int valor;

    printf("Valor da variável número: %d\n", numero);
    printf("endereço da variável: %p\n", ponteiro);
    printf("valor apontado pelo ponteiro: %d\n", ponteiro);

    printf("Digite um valor qualquer, e apresentarei o seu endereço e qual o seu valor apontado\n");
    scanf("%d", &valor);
    printf("Seu endereço é: %p\n", ponteiro);
    printf("seu valor é: %d\n", ponteiro);
    //ponteiro indica o local de onde está a variável
    return 0;
}