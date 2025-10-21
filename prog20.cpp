#include <stdio.h>

class PrismaTriangular {
    private:
    int alturaTriangulo;
    int baseTriangulo;
    int altura;

    public:
    // metodos ou função get(obter atributos privados) e set(definir novos parametros ás variaveis privadas)
    int obterAlturaTriangulo() {
        return alturaTriangulo;
    }

    void definirAlturaTriangulo(int a) {
        alturaTriangulo = a;
    }

    int obterBaseTriangulo() {
        return baseTriangulo;
    }

    void definirBaseTriangulo(int c) {
        baseTriangulo = c;
    }

    void definirAltura(int h) {
        altura = h;
    }
    int obterAltura() {
        return altura;
    }

    double obterAreaBase() {
        return (alturaTriangulo*baseTriangulo)/2;
    }
    double obterVolume() {
        return (alturaTriangulo*baseTriangulo*altura)/2;
    }

    double ReduzAltura() {
        altura = alturaTriangulo/2;
        return altura;
    }
};

class PrismaTriangularComPeso:public PrismaTriangular { // classe filha de PrismaTriangular
    private:
    int densidade;
    int volume;

    public:
        int obterDensidade() {
            return densidade;
        }
        void definirDensidade(int d) {
            densidade = d;
        }
        int obterPeso() {
            return obterVolume()*densidade;
        }    

        PrismaTriangularComPeso(int a, int c, int h,  int d) { 
            definirAlturaTriangulo(a);
            definirBaseTriangulo(c);
            definirAltura(h);
            definirDensidade(d);          
            
        }      

};

int main() {

    PrismaTriangularComPeso prisma(10, 5, 8, 12);
    prisma.ReduzAltura();
    


    printf("Altura do triangulo: %d\n", prisma.obterAlturaTriangulo());
    printf("Base Triangulo: %d\n", prisma.obterBaseTriangulo());
    printf("Altura/Comprimento do prisma: %d\n", prisma.obterAltura());
	printf("Area da base do prisma: %.2f\n", prisma.obterAreaBase());
	printf("Volume do prisma: %.2f\n", prisma.obterVolume());
    printf("Densidade do prisma: %d\n", prisma.obterDensidade());
    printf("Peso do prisma: %d\n", prisma.obterPeso());
    
    



return 0;
   
}