#include <stdio.h>

int main(void){

    int i;
    for(i=0;i<=10;i++){

        if(i == 5){
          printf("Podemos dar uma pause por aqui? Estou cansado, chefe!\n");
          continue;  /*quando for 5, o continue vai ser executado e ignorar o 5. Ou seja, ele só encerra aquela repetição*/
        }
            printf("%d\n", i);        
    }

    return 0;
}