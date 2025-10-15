#include <stdio.h>

//adicionar rectangulo com cor e cheiro
//class RectanguloComCorECheiro:public RectanguloComCor
//implementar instancia da classe RectanguloComCorECheiro

class Rectangulo {
    private:
		int largura;
		int comprimento;

	public:
        void definirLargura(int l){
            if (largura<=0)
            return;
            largura=l;
        }
        int obterLargura(){
            return largura;
        }
    void definirComprimento(int com){
        if (largura<0)
        return;
        comprimento=com;
    }
    int obterComprimento(){
        return comprimento;
    }
};

class RectanguloComCor: public Rectangulo {
    private:
        int cor;
    public:
        void definirCor(int co) {
        	if (co<0)
        	return;
        cor=co;
}
        int obterCor(){
            return cor;
}
   
};

class RectanguloComCorECheiro : public RectanguloComCor {
    public:
        int cheiro;
        void definirCheiro(int ch){
        	if (ch<=0)
        	return;
            cheiro=ch;
        }
        int obterCheiro(){
            return cheiro;
        }
    private:
};

int main() {
    RectanguloComCorECheiro r1;
    r1.definirLargura(12);
    r1.definirComprimento(50);
    r1.definirCor(1234);
    r1.definirCheiro(12);
    printf("Largura do Rectangulo: %d\n", r1.obterLargura());
    printf("Comprimento do rectangulo: %d\n", r1.obterComprimento());
    printf("Cor do rectangulo. %d\n", r1.obterCor());
    printf("Cheiro do rectangulo: %d\n", r1.obterCheiro());
    return 0;
}


