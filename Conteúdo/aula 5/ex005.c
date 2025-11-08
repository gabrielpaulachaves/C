#include <stdio.h>
#include <string.h>
#include <locale.h>


int main (void){
    setlocale(LC_ALL,"Portuguese");
    char s[10];

    /*Não use gets(), use fgets() no lugar*/

    printf("Insira um dado (usando gets): ");
    gets(s);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
    puts("");

    printf("Insira um dado (usando fgets): ");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);


    return 0;
}