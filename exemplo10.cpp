#include <stdio.h>

class Aluno {

    public:
    int idade;
    int numeroAluno;

};

class Curso {
    public:
    int codigoCurso;
    char nomeCurso[30];
};

int main()
{
    Aluno a1;
    Curso c1;

    a1.idade = 20;
    a1.numeroAluno = 12345;

    c1.codigoCurso = 101;
    snprintf(c1.nomeCurso, sizeof(c1.nomeCurso), "Engenharia");

    printf("Aluno:\n");
    printf("Idade: %d\n", a1.idade);
    printf("Numero do Aluno: %d\n", a1.numeroAluno);

    printf("\nCurso:\n");
    printf("Codigo do Curso: %d\n", c1.codigoCurso);
    printf("Nome do Curso: %s\n", c1.nomeCurso);

    return 0;
}