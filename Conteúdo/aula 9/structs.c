 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int main(void){
struct individuo{  //tipo classe em javascript
    char nome[50];
    int idade;
    char tel[30];
};    

//isso me lembra objeto em javascript

//iniciando struct
struct individuo pessoa1[2]; //"instancias" criadas a partir daquela "classe"
int i;
strcpy(pessoa1[0].nome, "Trevo Philips"); //strcpy é apenas para quando for usar char
pessoa1[0].idade = 43;
strcpy(pessoa1[0].tel, "não vou contar");

strcpy(pessoa1[1].nome, "Chino Moreno");
pessoa1[1].idade = 50;
strcpy(pessoa1[1].tel, "21037256192");

for (i = 0; i < 2; i++){
 printf("Nome: %s\n", pessoa1[i].nome);
 printf("Idade: %d\n", pessoa1[i].idade);
 printf("Telefone: %s\n", pessoa1[i].tel);
}
    return 0;
}