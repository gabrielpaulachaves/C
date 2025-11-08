#include <stdio.h>
#include <string.h>
#include <locale.h>


int main (void){
    setlocale(LC_ALL,"Portuguese");

    /*Usando o strcpy*/

    char origem[20] = {"Levi Akerman"};
    char destino[20];

    printf("Antes de usar o strcpy:\n ");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois de usar o strcpy:\n ");
    puts(origem);
    puts(destino);

 /*Usando o strcat*/

    char n1[20] = {"Eren"};
    char n2[20] = {" Yeager"};

    printf("Antes de usar strcat: \n");
    puts(n1);
    puts(n2);

    strcat(n1,n2);

    printf("Deposi de usar strcat: \n");
    puts(n1);


    char tam[20];
    int i;

    printf("Insira um valor: \n");
    gets(tam);
    i = strlen(tam);

    printf("Tamanho total do dado é: %d\n\n", i);

    printf("Mostrando o tamanho de ponta a ponta:\n");
    for(i=0;i<strlen(tam);i++){
        printf("%c", tam[20]);
    }


    char hard[20] = {"/exit"};
    char senha[20];
    int ok;

    printf("Digite uma senha: ");
    gets(senha);

    ok = strcmp(hard, senha);

    if(ok == 0){
        printf("Textos iguais.");
    }else{
        printf("textos diferentes.");
    }



    return 0;
}