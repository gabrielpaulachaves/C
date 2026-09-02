 #include <stdio.h>

 int valorglobal = 212341;

void funcaonova(){
    int numero = 800;
    printf("segue valor da variavel numero: %d\n", numero);
}
void exibirglobal(){
    printf("segue valor da variavel global: %d\n", valorglobal);
}

int main(void){
    funcaonova();
    exibirglobal();
    //ponteiro indica o local de onde está a variável
    return 0;
}

//alocação de memória
//automática: usar, quando terminar, liberar aquele espaço que estava sendo usado. ex: funçao
//estatica: permanece na memoria durante toda a execucao. ex: variaveis globais ou consts.
//dinamica: aloca e libera espaço conforme necessário (lembra um pouco nuvem)

//funcoes de alocacao:
//malloc: aloca bloco de memoria continua em bytes. 
//calloc: mesma coisa da malloc, mas recebe 2 argumentos, numero de argumentos e o tamanho de cada argumento
//free: libera memoria alocada dinamicamente pelas funcoes malloc e calloc