#include <iostream>
using namespace std;

/*Escreva um programa em C++ que cria uma classe chamada estoqueCelular, a qual
possui três itens de dados (atributos): codigoFabricante, codigoModelo e custo.
Todos esses dados (atributos) devem ser do po private. Além disso, você deve
também implementar duas funções setDados() e mostraDados(). A função setDados()
fornece os valores dos itens de dados, e a função mostraDados() mostra os
valores armazenados nesses três itens. Para elaborar esse programa, você deve
criar uma classe que atenda a esses requisitos. Note que você deve criar essas
funções-membros e chamá-las a parr da função main() juntamente com a criação de
objetos da classe estoqueCelular. */

class estoqueCelular {
    private:
        int codigoFabricante;
        int codigoModelo;
        int custo;


    public:
        void setDados(int f, int m, int c) {
        
            codigoFabricante = f;
            codigoModelo = m;
            custo = c;
    }
        void mostraDados() {
            cout << "Codigo Fabricante: " << codigoFabricante << endl;
            cout << "Codigo Modelo: " << codigoModelo << endl;
            cout << "Custo: " << custo << endl;
        }
    };


int main() {

    estoqueCelular obj1, obj2;
    obj1.setDados(123, 456, 789); // inicializa obj1
    obj2.setDados(987, 654, 321);
    obj1.mostraDados(); // mostra dados de obj1 função menbro
    obj2.mostraDados();

    cout << endl;
    system("pause");
    return 0;
}


