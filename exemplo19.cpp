#include <stdio.h>

class Arvore {
private:
    int fruto;
    int flor;

public:
// metodos set e get
	void definirFruto(int f) 
	{
		if (f < 0)
			return;
		fruto = f;
	}

	int obterFruto()
	{
		return fruto;
	}

	void definirFlor(int fl)
	{
		if (fl < 0)
			return;
		flor = fl;
	}

	int obterFlor()
	{
		return flor;
	}

// construtores sem parametro
	Arvore()
	{
	    definirFruto(0);

		definirFlor(0);
	}

// construtores com parametro

	Arvore(int f, int fl)

	{
		definirFruto(f);
		definirFlor(fl);
	}
};
// definir classe filha Arbusto com tamanho int e perenicidade int
class Arbusto : public Arvore {

private:
	int tamanho;
	int perenicidade;

public:
	void definirTamanho(int t)
	{
		if (t < 0)
			return;
		tamanho = t;
	}

	int obterTamanho()
	{
		return tamanho;
	}

	void definirPerenicidade(int p)
	{
		if (p < 0)
			return;
		perenicidade = p;
	}

	int obterPerenicidade()
	{
		return perenicidade;
	}

	// construtores sem parametros
	Arbusto()
	{
		definirFruto(0);
		definirFlor(0);
		definirTamanho(0);
		definirPerenicidade(0);
	}

// construtores com parametros

	Arbusto(int f, int fl, int t, int p)
	{
		definirFruto(f);
		definirFlor(fl);
		definirTamanho(t);
		definirPerenicidade(p);
	}
};

// definir classe filha Herbacea com ervas int

class Herbacea : public Arvore {
private:
	int ervas;

public:
	void definirErvas(int e)
	{
		if (e < 0)
			return;
		ervas = e;
	}
	int obterErvas()
	{
		return ervas;
	}

	Herbacea() // construtor sem parametros
	{
		definirFruto(0); // da classe mae Arvore
		definirFlor(0); // da classe mae Arvore
		definirErvas(0);
	}

	Herbacea(int f, int fl, int e)
	{
		definirFruto(f); // da classe mae Arvore
		definirFlor(fl); // da classe mae Arvore
		definirErvas(e);
	}
};
// testar as classes
int main()
{
	Arvore a1; //  objeto da classe mae
	
    printf("\n");
	printf("Fruto a1:%d\nflor a1:%d\n", a1.obterFruto(), a1.obterFlor());
	printf("\n\n");
	Arbusto t2(5, 8, 9, 10); // objeto da classe filha
	printf("Fruto t2:%d\n", t2.obterFruto());
	printf("Flor t2:%d\n", t2.obterFlor());
	printf("Tamanho t2:%d\n", t2.obterTamanho());
	printf("Perenicidade t2:%d\n", t2.obterPerenicidade());
	printf("\n\n");
	Herbacea h1(10, 12, 33); // objeto da classe filha
	printf("Fruto h1:%d\n", h1.obterFruto());
	printf("Flor h1:%d\n", h1.obterFlor());
	printf("Ervas h1:%d\n", h1.obterErvas());
    printf("\n");

	return 0;
}
