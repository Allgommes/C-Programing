#include <stdio.h>

class Turma {

private:
    char nome[50];  // Array to store multiple characters
    int idade;

public:
    void setNome(const char* nomeAluno) {
        int i = 0;
        while (nomeAluno[i] != '\0' && i < 49) {
            nome[i] = nomeAluno[i];
            i++;
        }
        nome[i] = '\0';
    }
    const char* getNome() {
        return nome;
    }
    void setIdade(int idadeAluno) {
        if (idadeAluno >= 0) {
            idade = idadeAluno;
        }
    }
    int getIdade() {
        return idade;
    }

};

int main() {
    Turma aluno1, aluno2;
    aluno1.setNome("Joao");
    aluno1.setIdade(20);

    aluno2.setNome("Maria");
    aluno2.setIdade(22);

    printf("Aluno1: Nome:%s Idade:%d\n", aluno1.getNome(), aluno1.getIdade());

    return 0;
}


