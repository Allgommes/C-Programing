#include <stdio.h>

class Veiculo {
    private:
    int ano;
	int matricula;

public:
    void definirMatricula(int m) {
        if (m<0)
        return;
        matricula=m;
    }
    int obterMatricula() {
        return matricula;
    }

    void definirAno(int a) {
        if (a<1970)
        return;
        ano=a;
    }

    int obterAno() {
        return ano;
    }
};

class VeiculoComRodas: public Veiculo {
    private:
		int quantidadeRodas;

	public:
    void definirRodas(int r){
    quantidadeRodas=r;
    }
    int obterRodas(){
        return quantidadeRodas;
    }
};

class VeiculoComRodasMotorizado: public VeiculoComRodas {
    private:
		int cilindrada;

	public:
    void definirCilindrada(int c){
    	if (c<=100)
    	return;
        cilindrada=c;
    }
    int obterCilindrada(){
        return cilindrada;
    }
       
};

class VeiculoMotorizado: public VeiculoComRodasMotorizado {
    private:
		int quantidadePortas;

	public:
    void definirPortas(int p){
    	if (p<0)
    	return;
        quantidadePortas=p;
    }
    int obterPortas(){
        return quantidadePortas;
    }
};

class Carro: public VeiculoMotorizado {
    private:
		int numeroDeLugares;
		int quantidadePortas;
    public:
    void definirLugares(int l){
        numeroDeLugares=l;
    }
    int obterLugares(){
        return numeroDeLugares;
    }
    void definirPortas(int pm){
        quantidadePortas=pm;
    }
    int obterPortas(){
        return quantidadePortas;
    }

};

int main() {
    Carro v1;
	v1.definirAno(1999);
    v1.definirAno(-1970); 
    v1.definirMatricula(123456);
    v1.definirRodas(4);
    v1.definirPortas(4);
    v1.definirCilindrada(1300);
    v1.definirLugares(6);
    v1.definirPortas(3);

    printf("Ano: %d\n", v1.obterAno());
    printf("Matricula: %d\n", v1.obterMatricula());
    printf("Quantidade Rodas: %d\n", v1.obterRodas());
    printf("Numero de portas: %d\n", v1.obterPortas());
    printf("Cilindrada: %d\n", v1.obterCilindrada());
    printf("Numero de Lugares: %d\n", v1.obterLugares());
    printf("Numero Portas Veiculo Motorizado: %d\n", v1.obterPortas());

    return 0;
}
