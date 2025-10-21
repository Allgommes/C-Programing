#include <iostream>

class PrismaTriangulo {
    private:
      int alturaTriangulo;
      int baseTriangulo;
      int altura;
      double areaBase;
      double volume;
    public:

    void definirAlturaTriangulo(int at){
        alturaTriangulo = at;
    }
    int obterAlturaTriangulo(){
        return alturaTriangulo;
    }
    void definirBaseTriangulo(int bt){
        baseTriangulo = bt;
    }
    int obterBaseTriangulo(){
        return baseTriangulo;
    }
    void definirAltura(int a){
        altura = a;
    }
    int obterAltura(){
        return altura;
    }
    double definirAreaBase(){
        areaBase = (baseTriangulo * alturaTriangulo) / 2.0;
        return areaBase;
    }
    double obterAreaBase(){
        return areaBase;
    }
    double definirVolume(){
        volume = areaBase * altura;
        return volume;
    }
    double obterVolume(){
        return volume;
    }
    int definirReduzAltura(int r){
        if (r<=0)
        return;
        altura = altura/r;
    }





};


int main() {
    
PrismaTriangulo p;

p.definirAlturaTriangulo(4);
p.definirBaseTriangulo(12);
p.definirAltura(5);
p.definirVolume();
p.definirReduzAltura(2);

printf("Altura do Triangulo: %d\n", p.obterAlturaTriangulo);



    return 0;
}