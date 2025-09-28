#include <iostream>

class Bicicleta {
private:
    int cor;
    int numeroDeRodas;
    int marca;

public:
    void DefinirCor(int c) {
        cor = c;
    }

    int ObterCor() {
        return cor;
    }
    
    // M�todo para definir o n�mero de rodas
    void DefinirNumeroDeRodas(int n) {
        if (n > 0) { // Valida��o simples
            numeroDeRodas = n;
        }
    }

    // M�todo para obter o n�mero de rodas
    int ObterNumeroDeRodas() {
        return numeroDeRodas;
    }

    // M�todo para definir a marca
    void DefinirMarca(int m) {
        marca = m;
    }

    // M�todo para obter a marca
    int ObterMarca() {
        return marca;
    }
};

int main() {
    Bicicleta bike1;

    // Erro 1: O nome do m�todo � 'DefinirCor', n�o 'definicaoCor'
    bike1.DefinirCor(4);

    // Adicionando valores para os outros atributos
    bike1.DefinirNumeroDeRodas(2);
    bike1.DefinirMarca(1);

    // O printf n�o existe em C++ por padr�o. Use cout.
    // O erro 2 � o uso de printf em C++ sem o header <cstdio>
    std::cout << "Cor: " << bike1.ObterCor() << std::endl;
    std::cout << "Numero de Rodas: " << bike1.ObterNumeroDeRodas() << std::endl;
    std::cout << "Marca: " << bike1.ObterMarca() << std::endl;

    return 0;
}
