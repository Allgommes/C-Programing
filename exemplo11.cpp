#include <stdio.h>

class Aluno {
public:
    int idade;  // atributos
    int numeroAluno;
};
class Turma {
    private:
        int numero;
    public:
        void definirNumero(int n)
        {
            if (n<0) return;
            numero=n;
        }
        int obterNumero ()
        {
            return numero;
        }
        Aluno alunos[3];
};
int main()
{
    Turma t1;
    t1.definirNumero(2); // vetor de objetos
    t1.alunos[0].idade=25;
    t1.alunos[0].numeroAluno=1;
    t1.alunos[1].idade=30;
    t1.alunos[1].numeroAluno=2;
    t1.alunos[2].idade=40;
    t1.alunos[2].numeroAluno=3;

    printf("Numero da Turma: %d\n", t1.obterNumero());
    printf("Aluno 0:\n");
    printf("Numero:%d\n", t1.alunos[0].numeroAluno);
    printf("Idade: %d\n",t1.alunos[0].idade);

	printf("Numero da Turma: %d\n", t1.obterNumero());
	printf("Aluno 1:\n");
	printf("Numero:%d\n", t1.alunos[1].numeroAluno);
	printf("Idade: %d\n", t1.alunos[1].idade);

	printf("Numero da Turma: %d\n", t1.obterNumero());
	printf("Aluno 0:\n");
	printf("Numero:%d\n", t1.alunos[2].numeroAluno);
	printf("Idade: %d\n", t1.alunos[2].idade);

	return 0;
}