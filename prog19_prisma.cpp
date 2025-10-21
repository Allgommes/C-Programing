#include <stdio.h>

class PrismaTriangulo {
    private:
    int alturaTriangulo;
    int baseTriangulo;
    int altura;

    public:
    int obterAlturaTriangulo(){
        return alturaTriangulo;
    }
    void definirAlturaTriangulo(int a){
        alturaTriangulo=a;
    }
    int obterBaseTriangulo(){
        return baseTriangulo;
    }
    void definirBaseTriangulo(int c){
        baseTriangulo=c;
    }
    int obterAltura(){
        return altura;
    }
    void definirAltura(int h){
        altura=h;
    }

    double obterAreaBase(){
        return (alturaTriangulo*baseTriangulo)/2;
    }
    double obterVolume(){
        return (alturaTriangulo*baseTriangulo*altura)/2;
    }
    void reduzAltura(){
        altura=altura/2;
    }

};

int main(){
    PrismaTriangulo p;

    p.definirAlturaTriangulo(6);
    p.definirBaseTriangulo(10);
    p.definirAltura(4);

    



    return 0;
}