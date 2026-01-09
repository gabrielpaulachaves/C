#include <stdio.h>

int main(void){

    int v[5];
    int i = 0;


        for(i=0;i<5;i++){
            printf("Digite um dado: ");
            fgets(i, sizeof(v[5]), stdin);
            scanf("%d", &v[i]);
        }

        printf("Dados inseridos: \n");
        for(i=0;i<5;i++){
            printf("%d ", v[i]);
        }

    return 0;
}

/*scanf tenta converter quando o dado entra, já o fgets lê o texto da forma como é, eu que preciso converter depois*/