#include <stdio.h>


int main(void){

int mes;

printf("De acordo com o seu mes de nascimento, descubra quem voce eh (de 1 a 12)\n");
scanf("%d", &mes);

switch(mes){

    case 1:
        printf("Janeiro. Voce eh a Power\n");        
        break;
     case 2:
        printf("Fevereiro. Voce eh o Jotaro\n");
        break;
     case 3:
        printf("Março. Voce eh o Killua\n");
        break;
     case 4:
        printf("Abril. Voce eh o Rudo\n");
        break;
     case 5:
        printf("Maio. Voce eh o Eren. TATAKAE\n");
        break;
     case 6:
        printf("Junho. Voce eh o Naruto\n");
        break;
     case 7:
        printf("Julho. Voce eh a Yae Miko\n");
        break;
     case 8:
        printf("Agosto. Voce eh a Mikasa\n");
        break;
     case 9:
        printf("Setembro. Voce eh o Light Yagami\n");
        break;
     case 10:
        printf("Outubro. Voce eh a Freiren\n");
        break;
     case 11:
        printf("Novembro. Voce eh o Goku");
        break;
     case 12:
        printf("Dezembro. Voce eh o Al Haitham");
        break;
    default:
        printf("voce eh ninguem");
    break;
 }
    return 0;
}