 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 //array de struct

int main(void){
    struct Aluno{
         char nome[50];
         int idade;
         int turma;
         int matricula;
    };
    

    struct Aluno alunos[3];

    strcpy(alunos[0].nome, "João");
    alunos[0].idade = 17;
    alunos[0].turma = 3001;
    alunos[0].matricula = 2026123;

    strcpy(alunos[1].nome, "Lucia");
    alunos[1].idade = 16;
    alunos[1].turma = 2004;
    alunos[1].matricula = 2026155;

    strcpy(alunos[2].nome, "Matheus");
    alunos[2].idade = 18;
    alunos[2].turma = 3002;
    alunos[2].matricula = 2026127;

    for (int i = 0; i < 3; i++){
        printf("Aluno número %d\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Turma: %d\n", alunos[i].turma);
        printf("Matricula: %d\n\n", alunos[i].matricula);
    }
    
    
    return 0;
}