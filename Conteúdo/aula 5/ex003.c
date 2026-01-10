#include <stdio.h>
#include <string.h>

int main(void){

    int v[5];
    int i = 0;


        for(i=0;i<5;i++){
            printf("Digite um dado: ");
            /*
            getchar(); lê um único caracter do teclado,e quando der ENTER, volta pro ASCII desse caracter
            fgets(i, sizeof(v), stdin);
            v[strlen(v) - 1] = "\0"  quando damos enter no fgets, ele tbm leva em consideração o ENTER, então esse comando evita que ele pule linha*/
            scanf("%d", &v[i]);
        }

        printf("Dados inseridos: \n");
        for(i=0;i<5;i++){
            printf("%d ", v[i]);
        }

    return 0;
}

/*scanf tenta converter quando o dado entra, já o fgets lê o texto da forma como é, eu que preciso converter depois*/