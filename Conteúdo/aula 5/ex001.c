 #include <stdio.h>

 int main(void){

    int v[5];

        v[0] = 50;
        v[1] = 40;
        v[2] = 30;
        v[3] = 20;
        v[4] = 10;

        float m;

        m =(v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

        printf("resultado: %.2f", m);


    return 0;
 }