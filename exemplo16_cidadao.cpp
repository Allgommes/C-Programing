#include <stdio.h>

class Cidadao {

private:
	int cc;
    int nif;

public:
	void definirCc(int c)
	{
		cc = c;
	}
	int obterCc()
	{
		return cc;
	}
    void definirNif(int n)
    {
        nif = n;
    }
    int obterNif()
    {
        return nif;
    }

	Cidadao()
	{
		cc = 0;
	}
	Cidadao(int c)
	{
		cc = c;
	}
	Cidadao(int c, int factor)
	{
		cc = c * factor;
	}
};

// Definir classe filha Cliente com NIF int

int main()

{

	// definir classe filha Cliente com NIF int e construir 2 construtores: um com factor e outro sem factor
    // criar 2 objetos cidadao1 e cidadao2
    Cidadao cidadao1;
    Cidadao cidadao2(67);
    cidadao1.definirCc(987654321);

    cidadao1.definirNif(123456789);
    cidadao2.definirNif(987654321);

    printf("Cidadao1 CC: %d\n", cidadao1.obterCc());
    printf("Cidadao2 CC: %d\n", cidadao2.obterCc());

    printf("Cidadao1 NIF: %d\n", cidadao1.obterNif());
    printf("Cidadao2 NIF: %d\n", cidadao2.obterNif());

     
	return 0;
}
