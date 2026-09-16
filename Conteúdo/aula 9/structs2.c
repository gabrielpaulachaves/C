 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

struct paciente{  
    char nome[50];
    int idade;
    char tel[15];
};    
void exibirpaciente(struct paciente p){
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Telefone: %s\n", p.tel);
};

int main(void){
    struct paciente paciente1 = {"Gabriel", 700, "12345-6789"};
    exibirpaciente(paciente1);


    return 0;
}