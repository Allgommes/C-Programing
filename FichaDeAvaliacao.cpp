#include <stdio.h>

class Cilindro{
protected:
    float raio;
    float altura;

public:
    float obterRaio(){
        return raio;
    }

    void definirRaio(float r){
        if (r > 0)
        {
            raio = r;
        }
    }

    float obterAltura(){
        return altura;
    }

    void definirAltura(float h){
        if (h > 0)
        {
            altura = h;
        }
    }

    float obterVolume(){
        return 3.14 * raio * raio * altura;
    }

    void reduzRaio(){
        raio = raio / 2;
    }

    Cilindro(){
        raio = 1.0;
        altura = 1.0;
    }

    Cilindro(float r, float h){
        definirRaio(r);
        definirAltura(h);
    }
};

class CilindroComID : public Cilindro{
private:
    int ID;

public:
    int obterID(){
        return ID;
    }

    void definirID(int Identi){
        if (Identi > 0)
            ID = Identi;
    }

    // construtor sem parametros
    CilindroComID(){
        definirRaio(0);
        definirAltura(0);
        definirID(0);
    }

    CilindroComID(float r, float h, int id){
        definirRaio(r);
        definirAltura(h);
        definirID(id);
    }
};

class CilindroComCor : public CilindroComID{
private:
    int cor;

public:
    int obterCor(){
        return cor;
    }

    void definirCor(int c){
        cor = c;
    }

    CilindroComCor(float r, float h, int id, int c){
        definirRaio(r);
        definirAltura(h);
        definirID(id);
        definirCor(c);
    }
};

int main()
{
    Cilindro c1;
    c1.definirAltura(15.0);
    c1.definirRaio(10);
    printf("\nClass Cilindro:\n");
    printf("Raio: %.2f\n", c1.obterRaio());
    printf("Altura: %.2f\n", c1.obterAltura());
    printf("Volume: %.2f\n", c1.obterVolume());
    printf("\nReduzindo o raio pela metade...\n");
    c1.reduzRaio();
    printf("Novo Raio apos reducao: %.2f\n", c1.obterRaio());
    printf("Novo Volume apos reducao: %.2f\n", c1.obterVolume());

    CilindroComID cn1; // objeto da classe CilindroComID
    CilindroComID cn2;

    printf("\nClass CilindroComID CN1:\n");
    printf("CN1 Raio: %.2f\n", cn1.obterRaio());
    printf("CN1 Altura: %.2f\n", cn1.obterAltura());
    printf("CN1 ID: %d\n", cn1.obterID());
    printf("CN1 Volume: %.2f\n", cn1.obterVolume());
     
    printf("\nClass CilindroComID CN2:\n");

    cn2.definirRaio(5.0);
    cn2.definirAltura(10.0);
    cn2.definirID(202);

    printf("CN2 Raio: %.2f\n", cn2.obterRaio());
    printf("CN2 Altura: %.2f\n", cn2.obterAltura());
    printf("CN2 ID: %d\n", cn2.obterID());
    printf("\nClass Cilindro com Cor CC1:\n");

    CilindroComCor cc1(6.0, 9.0, 303, 5);

    printf("CC1 Raio: %.2f\n", cc1.obterRaio());
    printf("CC1 Altura: %.2f\n", cc1.obterAltura());
    printf("CC1 ID: %d\n", cc1.obterID());
    printf("CC1 Cor: %d\n", cc1.obterCor());
    printf("CC1 Volume: %.2f\n", cc1.obterVolume());

    CilindroComCor cc2(3.0, 4.0, 404, 10);
    
    printf("\nClass Cilindro com Cor CC2:\n");
    printf("CC2 Raio: %.2f\n", cc2.obterRaio());
    printf("CC2 Altura: %.2f\n", cc2.obterAltura());
    printf("CC2 ID: %d\n", cc2.obterID());
    printf("CC2 Cor: %d\n", cc2.obterCor());
    printf("CC2 Volume: %.2f\n", cc2.obterVolume());

    return 0;
}