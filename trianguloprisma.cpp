#include <stdio.h>

class PrismaTriangular {
private:
    int alturaTriangulo;
    int baseTriangulo;
    int altura;

public:
// get le os valores dos atributos privados
    int ObterAlturaTriangulo() { 
        return alturaTriangulo;
    }
    
    int ObterBaseTriangulo() {
        return baseTriangulo;
    }
    
    int ObterAltura() {
        return altura;
    }
    // set atribui novos valores aos atributos privados
    void DefinirAlturaTriangulo(int a) {
        if (a > 0) {
            alturaTriangulo = a;
        }
    }
    
    void DefinirBaseTriangulo(int c) {
        if (c > 0) {
            baseTriangulo = c;
        }
    }
    
    void DefinirAltura(int h) {
        if (h > 0) {
            altura = h;
        }
    }
    
    double ObterAreaBase() { // construtor para obter a Area
        return (baseTriangulo * alturaTriangulo) / 2.0;
    }
    
    double ObterVolume() {
        return (alturaTriangulo * baseTriangulo * altura) / 2.0;
    }
    
    void ReduzAltura() {
        altura = altura / 2;
    }
};

int main() {
    PrismaTriangular prisma; // criado o obeto prisma da classe PrismaTriangular
    
    prisma.DefinirAlturaTriangulo(6); // usando o objeto prisma para chamar o metodo set(definir) que devolve um novo valor ao atributo privado alturaTriangulo
    prisma.DefinirBaseTriangulo(8);
    prisma.DefinirAltura(10);

    printf("Altura do Triangulo (a): %d\n", prisma.ObterAlturaTriangulo()); // usando o objeto prisma para chamar o metodo get(obter) que le o valor do atributo privado //alturaTriangulo
    printf("Base do Triangulo (c): %d\n", prisma.ObterBaseTriangulo());
    printf("Altura do Prisma (h): %d\n", prisma.ObterAltura());
    printf("Area da Base: %.2f\n", prisma.ObterAreaBase());
    printf("Volume: %.2f\n", prisma.ObterVolume());
    
    prisma.ReduzAltura();
    printf("Nova Altura do Prisma (h): %d\n", prisma.ObterAltura());
    printf("Novo Volume: %.2f\n", prisma.ObterVolume());
    
    return 0;
}
