#include <stdio.h>

// criar uma classe mamiferos e classe cachorro dentro da classe mamiferos

class mamiferos {
    public:
    int idade;
    int peso;
    int sexo;
    int cor;   
};

class cachorro: public mamiferos {
    public:
    int raca;
    int nome;
      
};

int main() {
    cachorro c1;
    c1.idade=5;
    c1.peso=20;
    c1.sexo='M';
    c1.cor='C';
 

    printf("Idade: %d\n", c1.idade);
    printf("Peso: %d\n", c1.peso);
    printf("Sexo: %c\n", c1.sexo);
    printf("Cor: %c\n", c1.cor);
   

    return 0;

}


