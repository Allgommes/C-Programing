#include <stdio.h>

class Veiculo {  // classe base
    public:
    int matricula;
    int ano;
};

class VeiculoComRodas: public Veiculo {   // classe derivada da classe Veiculo
    public:
    int quantidadeRodas;
};

class VeiculoComRodasMoterizado: public VeiculoComRodas {  // classe derivada da classe VeiculoComRodas
    public:
    int cilindrada;
};

class VeiculoMotorizado: public VeiculoComRodasMoterizado {
    public:
    int quantidadedePortas;
};

class Carro: public VeiculoMotorizado {
    public:
    int numeroDeLugares;
};

int main() {
    Carro v1;  // objeto da classe derivada
    v1.ano=1999;                            
    v1.matricula=456789;                    // atributo da classe base
    v1.quantidadeRodas=3;                   // atributo da classe derivada VeiculoComRodas
    v1.cilindrada=150;     
    v1.quantidadedePortas=4;
    v1.numeroDeLugares=5;

    printf("Matricula: %d\n", v1.matricula);
    printf("Ano: %d\n", v1.ano);
    printf("Quantidade de rodas: %d\n", v1.quantidadeRodas);
    printf("Potencia: %d\n", v1.cilindrada);
    printf("Quantidade de portas: %d\n", v1.quantidadedePortas);
    printf("Numero de lugares: %d\n", v1.numeroDeLugares);

    return 0;
}