#include <stdio.h>
#include <stdbool.h>

int main (void){

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 

    int i, j;

   /* for(j=0;j<3;j++){
        printf("%d", matriz[0][j]);
    }
     for(j=0;j<3;j++){
        printf("%d", matriz[1][j]);
    }
     for(j=0;j<3;j++){
        printf("%d", matriz[2][j]);
    }*/
    for(i=0;i<3;i++){
        for(j=0;j<3; j++){
            printf("%d", matriz[i][j]);
        }
       printf("\n"); 
    }
    return 0;
}