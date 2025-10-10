#include <stdio.h>

/*atribuições aritmeticas
++
--
+=
-=
*=
/=
*/

int main(void){

    int dado = 10;
    printf("valor antes do incremento: %d\n", dado);

    dado++;
    printf("Dado depois do incremento: %d\n", dado);

    dado--;
    printf("Dado depois do decremento: %d \n", dado);

    dado += 3;
    printf("Dado depois do incremento de 3: %d \n", dado);

    dado -= 5;
    printf("Dado depois do decremento de 5: %d \n", dado);

    dado *= 12;
    printf("Dado depois da multiplicacao de 12: %d \n", dado);

    return 0;
}