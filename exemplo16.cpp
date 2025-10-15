#include <stdio.h>

class Cidadao {
	private:
		int cc;
	public:
		void definirCidadao(int Cd){
			cc = Cd;
		}
		int obterCidadao(){
			return cc;
		}	
		Cidadao(){
			cc=0;
		}
		Cidadao(int c){
			cc=c;
		}
		Cidadao(int c, int factor){
			cc=c*factor;
		}
	};
		


class Cliente: public Cidadao {
	private:
		int NIF;
	public:
	void definirCliente(int Cl){
		NIF = Cl;
	}	
	int obterCliente(){
		return NIF;
	}
};

int main(){
	Cliente r1;
	Cidadao c2(67);
	Cidadao c3(45,2);
	r1.definirCidadao(12);
	r1.definirCidadao(45);
	r1.definirCliente(89);
	printf("Cidadao numero: %d\n", r1.obterCidadao());
	printf("Cliente numero: %d\n", r1.obterCliente());
	printf("cc de c1: %d\n", c2.obterCidadao());
	printf("cc de c2: %d\n", c2.obterCidadao());
	printf("cc de c3: %d\n", c3.obterCidadao());
	return 0;
}

