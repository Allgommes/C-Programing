/**
 * @file prog17_v1.cpp
 * @brief Demonstração de herança em C++ com classes Arvore e Arbusto
 * 
 * Este programa implementa um sistema simples de classes relacionadas a árvores e arbustos:
 * 
 * @class Arvore
 * Classe base que representa uma árvore genérica
 * Atributos privados:
 * - fruto: quantidade de frutos
 * - flor: quantidade de flores
 * 
 * Métodos públicos:
 * - definirFruto(): setter para frutos
 * - obterFruto(): getter para frutos
 * - definirFlor(): setter para flores  
 * - obterFlor(): getter para flores
 * - Construtores: default e parametrizado
 * 
 * @class arbustousto
 * Classe derivada que herda de Arvore
 * Atributos privados adicionais:
 * - tamanho: dimensão do arbusto
 * - perenicidade: indica se é perene
 * 
 * Métodos públicos adicionais:
 * - definirTamanho(): setter para tamanho
 * - obterTamanho(): getter para tamanho
 * - definirPerenicidade(): setter para perenicidade
 * - obterPerenicidade(): getter para perenicidade
 * 
 * Na função main são criados e manipulados os seguintes objetos:
 * - arvore1: objeto da classe Arvore (usando ambos construtores)
 * - arbusto2: objeto da classe Arvore (usando ambos construtores) 
 * - arbusto1: objeto da classe derivada arbustousto
 * 
 * Valores são atribuídos através dos setters e recuperados através dos getters
 * para demonstrar a funcionalidade das classes.
 */
#include <stdio.h>

class Arvore {
private:
	int fruto;
	int flor;

public:
	void definirFruto(int f) {
		if (f < 0)
			return;
		fruto = f;
	}
	int obterFruto() { return fruto; }
	void definirFlor(int fl) {
		if (fl < 0)
			return;
		flor = fl;
	}
	int obterFlor() { 
		return flor; 
	}

	Arvore() {
		definirFruto(0);
		definirFlor(0);
	}
	Arvore(int f, int fl) {
		definirFruto(f);
		definirFlor(fl);
	};
};

// classe filha da classe arvore
class arbusto: public Arvore { // classe filha da classe arvore
		private:
		int tamanho;
		int perenicidade;

		public:
		void definirTamanho(int t) {  // setter 
            if (t < 0)
            return;
            tamanho = t;
			
		}
		int obterTamanho() {
			return tamanho;
		}
		void definirPerenicidade(int p) {
            if (p<0)
            return;
            perenicidade = p;
			
		}
		int obterPerenicidade() {
			return perenicidade;
		}

		
};

int main() {

	Arvore arvore2; 
    Arvore arvore1(5, 10); 
    Arvore arbusto2;
	Arvore arbusto2(2, 3); 

	arbusto arbusto1;
	arbusto1.definirFruto(5);
	arbusto1.definirFlor(7);
	arbusto1.definirPerenicidade(1);
	arbusto1.definirTamanho(10);

	printf("Fruto a1: %d\n", arvore1.obterFruto());
	printf("Flor a1: %d\n", arvore1.obterFlor());
    printf("\n");
	printf("Fruto a2: %d\n", arbusto2.obterFruto());
	printf("Flor a2: %d\n", arbusto2.obterFlor());
    printf("\n");
    printf("Fruto arbusto1: %d\n", arbusto1.obterFruto());
    printf("Flor arbusto1: %d\n", arbusto1.obterFlor());
    printf("Perenicidade arbusto1: %d\n", arbusto1.obterPerenicidade());
    printf("Tamanho arbusto1: %d\n", arbusto1.obterTamanho());


	return 0;
}