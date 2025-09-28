#include <stdio.h> 

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
    void DefinirNumeroDeRodas(int n) {
        if (n > 0) {
            numeroDeRodas = n;
        }
    }
    int ObterNumeroDeRodas() {
        return numeroDeRodas;
    }
    void DefinirMarca(int m) {
        marca = m;
    }
    int ObterMarca() {
        return marca;
    }
};

int main() {
    Bicicleta bike1;
    bike1.DefinirCor(4);
    bike1.DefinirNumeroDeRodas(2);
    bike1.DefinirMarca(1);

	printf("Cor: %d\n", bike1.ObterCor());	
    printf("Numero de Rodas: %d\n", bike1.ObterNumeroDeRodas());
    printf("Marca: %d\n", bike1.ObterMarca());

    return 0;
}
