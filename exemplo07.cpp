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
    
    // Método para definir o número de rodas
    void DefinirNumeroDeRodas(int n) {
        if (n > 0) { // Validação simples
            numeroDeRodas = n;
        }
    }

    // Método para obter o número de rodas
    int ObterNumeroDeRodas() {
        return numeroDeRodas;
    }

    // Método para definir a marca
    void DefinirMarca(int m) {
        marca = m;
    }

    // Método para obter a marca
    int ObterMarca() {
        return marca;
    }
};

int main() {
    Bicicleta bike1;

    // Erro 1: O nome do método é 'DefinirCor', não 'definicaoCor'
    bike1.DefinirCor(4);

    // Adicionando valores para os outros atributos
    bike1.DefinirNumeroDeRodas(2);
    bike1.DefinirMarca(1);

    // O printf não existe em C++ por padrão. Use cout.
    // O erro 2 é o uso de printf em C++ sem o header <cstdio>
    std::cout << "Cor: " << bike1.ObterCor() << std::endl;
    std::cout << "Numero de Rodas: " << bike1.ObterNumeroDeRodas() << std::endl;
    std::cout << "Marca: " << bike1.ObterMarca() << std::endl;

    return 0;
}
