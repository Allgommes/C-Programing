#include <stdio.h>

class Cilindro {
protected:
    float raio;
    float altura;

public:
    float obterRaio() {
        return raio;
    }
    
    void definirRaio(float r) {
        if (r > 0) {
            raio = r;
        }
    }
    
    float obterAltura() {
        return altura;
    }
    
    void definirAltura(float h) {
        if (h > 0) {
            altura = h;
        }
    }
    
    float obterVolume() {
        return 3.14 * raio * raio * altura;
    }
    
    void reduzRaio() {
        raio = raio / 2;
    }
};

class CilindroComID:Cilindro {
    private:
    int ID;

    public:
    int obterID() {
        return ID;
    }
    void definirID(int Identi) {
        if (Identi > 0)
        ID = Identi;
    }

    CilindroComID(float r, float h, int id) {
        definirRaio(r);
        definirAltura(h);
        definirID(id);
    }
    CilindroComID() {
        
    }

    


};

int main() {
    Cilindro c;
    
    c.definirRaio(10.0);
    c.definirAltura(15.0);
    
    printf("Raio: %.2f\n", c.obterRaio());
    printf("Altura: %.2f\n", c.obterAltura());
    printf("Volume: %.2f\n", c.obterVolume());
    
    c.reduzRaio();
    printf("Novo Raio: %.2f\n", c.obterRaio());
    printf("Novo Volume: %.2f\n", c.obterVolume());

    printf("Insira o Raio do Cilindro: ");
    scanf("%f", &c.definirRaio());
    printf("Insira a altura do Cilindro: ");
    scanf("%f", &c.definirAltura());

    return 0;
}