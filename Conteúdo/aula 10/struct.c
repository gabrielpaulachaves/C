 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

//usando structs aninhadas - basicamente structs dentro de structs
//lembra um pouco a criaçao de uma foreign key

struct Materia{
    char nome[50];
    char professor[30];
    int hora;
};

struct Aluno{
    char nomealuno[30];
    int matricula;
    struct Materia materia[3];
};

void cadastrardisciplina(struct Materia *materia, const char *nome, const char *professor, const int *hora){
    strcpy(materia->nome, nome);
    strcpy(materia->professor, professor);
    materia->hora = hora;
};

void cadastraraluno(struct Aluno *aluno, const char *nomealuno,int *matricula){
    strcpy(aluno->nomealuno, nomealuno);
    aluno->matricula = matricula;

    cadastrardisciplina(&aluno->materia[0], "Historia", "Napoleão", 50);
    cadastrardisciplina(&aluno->materia[1], "Encantamento", "Satoru Gojo", 10);
    cadastrardisciplina(&aluno->materia[2], "Matemática", "Albert", 20);
};

void exibir(struct Aluno *aluno){
    int i;

    printf("Nome do aluno: %s\n", aluno->nomealuno);
    printf("Matricula do aluno: %s\n", aluno->matricula);

    printf("Matriculas: \n");
    for (i = 0; i < 3; i++){
       printf("Disciplina %d:\n", i);
        printf("Nome: %s\n",aluno->materia[i].nome);
        printf("Professor: %s\n", aluno->materia->professor);
        printf("Carga horária: %d horas\n", aluno->materia->hora);
    };
    

};

int main(void){

struct Aluno aluno1;

cadastraraluno(&aluno1, "Yuji Itadori", 2);
exibir(&aluno1);
 return 0;
}