#include <iostream>
using namespace std;

class Veiculo {
    public:
    int matricula;
    int ano;
};

class VeiculoComRodas:public Veiculo {
    public:
    int quantidadeRodas;
};

class VeiculoComRodasMotorizado:public VeiculoComRodas {
    public:
    int cilindrada;
};

class VeiculoMotorizado:public VeiculoComRodasMotorizado {
    public:
    int quantidadePortas;
};

class Carro: public VeiculoMotorizado {
    public:
    int numeroDeLugares;
};

int main() {
    Carro v1;
    v1.ano=1999;
    v1.matricula=121256;
    v1.quantidadeRodas=4;
    v1.cilindrada=125;
    v1.quantidadePortas=2;
    v1.numeroDeLugares=2;

    cout << "Ano: " << v1.ano << endl;
    cout << "Matricula: " << v1.matricula << endl;
    cout << "Numero Rodas: " << v1.quantidadeRodas << endl;
	cout << "Cilindrada: " << v1.cilindrada << endl;
	cout << "Numero Portas: " << v1.quantidadePortas << endl;
	cout << "Numero Lugares: " << v1.numeroDeLugares << endl;

    cout << endl;
    system("pause");
    return 0;
}