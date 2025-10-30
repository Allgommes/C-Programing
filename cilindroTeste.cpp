#include <stdio.h>
// Programa para demonstrar herança em C++ usando classes de cilindro
// 
// Hierarquia de classes:
// - Cliindro: classe base com raio e altura
// - CliindroComID: herda de Cliindro e adiciona ID
// - CliIndroComIDECor: herda de CliindroComID e adiciona cor
//
// Cada classe fornece:
// - Construtores padrão e parametrizados
// - Métodos getters/setters para seus atributos
// - A classe base também fornece cálculo de volume
// 1. Classe Cliindro
class Cliindro
{
protected:
    float raio;
    float altura;

public:
    // Construtor padrão
    Cliindro() : raio(0), altura(0) {}

    // Métodos de acesso
    float obterRaio() const
    {
        return raio;
    }

    void definirRaio(float r)
    {
        raio = r;
    }

    float obterAltura() const
    {
        return altura;
    }

    void definirAltura(float a)
    {
        altura = a;
    }

    float obterVolume() const
    {
        return 3.14f * raio * raio * altura;
    }

    void reduzRaio()
    {
        raio /= 2;
    }
};

// 3. Classe CliindroComID (herda de Cliindro)
class CliindroComID : public Cliindro
{
private:
    int ID;

public:
    // 4. Construtores
    CliindroComID(int id, float r, float a)
    {
        ID = id;
        definirRaio(r);
        definirAltura(a);
    }

    CliindroComID() : ID(0) {}

    // Métodos de acesso para ID
    int obterID() const
    {
        return ID;
    }

    void definirID(int id)
    {
        ID = id;
    }
};

// 6. Classe CliIndroComIDECor (herda de CliindroComID)
class CliIndroComIDECor : public CliindroComID
{
private:
    int cor;

public:
    // Construtores
    CliIndroComIDECor(int id, float r, float a, int c) : CliindroComID(id, r, a)
    {
        cor = c;
    }

    CliIndroComIDECor() : cor(0) {}

    // Métodos de acesso para cor
    int obterCor() const
    {
        return cor;
    }

    void definirCor(int c)
    {
        cor = c;
    }
};

int main()
{
    // 2. Teste com Cliindro
    printf("=== Teste da classe Cliindro ===\n");
    Cliindro c1;
    c1.definirRaio(10);
    c1.definirAltura(5);
    printf("Raio: %.2f\n", c1.obterRaio());
    printf("Altura: %.2f\n", c1.obterAltura());
    printf("Volume: %.2f\n", c1.obterVolume());
    c1.reduzRaio();
    printf("Raio apos reduzRaio(): %.2f\n", c1.obterRaio());

    // 5. Teste com CliindroComID
    printf("\n=== Teste da classe CliindroComID ===\n");
    CliindroComID cn1(1, 8, 4);
    CliindroComID cn2;

    printf("cn1 - ID: %d\n", cn1.obterID());
    printf("cn1 - Raio: %.2f\n", cn1.obterRaio());
    printf("cn1 - Altura: %.2f\n", cn1.obterAltura());
    printf("cn1 - Volume: %.2f\n", cn1.obterVolume());

    cn2.definirID(2);
    cn2.definirRaio(6);
    cn2.definirAltura(3);
    printf("cn2 - ID: %d\n", cn2.obterID());
    printf("cn2 - Volume: %.2f\n", cn2.obterVolume());

    // 7. Teste com CliIndroComIDECor
    printf("\n=== Teste da classe CliIndroComIDECor ===\n");
    CliIndroComIDECor cnc1(3, 5, 2, 255);
    CliIndroComIDECor cnc2;

    cnc2.definirID(4);
    cnc2.definirRaio(3);
    cnc2.definirAltura(7);
    cnc2.definirCor(128);

    printf("cnc1 - ID: %d\n", cnc1.obterID());
    printf("cnc1 - Cor: %d\n", cnc1.obterCor());
    printf("cnc1 - Volume: %.2f\n", cnc1.obterVolume());

    printf("cnc2 - ID: %d\n", cnc2.obterID());
    printf("cnc2 - Cor: %d\n", cnc2.obterCor());
    printf("cnc2 - Volume: %.2f\n", cnc2.obterVolume());

    return 0;
}