#include <stdio.h>

int main(void){

    int v[5];
    int i = 0;


        for(i=0;i<5;i++){
            printf("Digite um dado: ");
            scanf("%d", &v[i]);
        }

        printf("Dados inseridos: \n");
        for(i=0;i<5;i++){
            printf("%d ", v[i]);
        }

    return 0;
}