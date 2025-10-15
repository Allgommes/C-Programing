#include <stdio.h>

// classe Cpu classe MemoriaRam class Computador
// atributos para cada classe
// criar um objeto computador c1
// atribuir valores para os atributos
// exibir os valores dos atributos
// criar classe filha
class Computador { // classe pai
public:
	int ref;
	CPU processador;
	MemoriaRam ram;
	fonteAlimentacao fonte;
};

class CPU {
    public:
    int ref;
    int velocidadeEmGHz;
};

class MemoriaRam {
    public:
    int ref;
    int capacidadeEmGigaBytes;
};

class fonteAlimentacao {
    public:
    int ref;
    int potencia;
};



int main() {
    Computador c1, c2;
    c1.ref = 1234;
    c1.processador.ref = 111;
    c1.processador.velocidadeEmGHz = 3200;
    c1.ram.ref = 222;
    c1.ram.capacidadeEmGigaBytes = 16;
	c1.fonte.ref = 3333;
	c1.fonte.potencia = 500;
	

	c2.ref = 5678;
    c2.processador.ref = 333;
    c2.ref = 5678;
    c2.processador.ref = 333;
    c2.processador.velocidadeEmGHz = 3600;
    c2.ram.ref=444;
    c2.ram.capacidadeEmGigaBytes = 32;
	c2.fonte.ref = 4444;
	c2.fonte.potencia = 700;
   

    printf("Computador c1 %d\n", c1.ref);
    printf("Processador %d\n", c1.processador.ref);
    printf("Velocidade %d\n", c1.processador.velocidadeEmGHz);
    printf("Memoria RAM %d\n", c1.ram.ref);
    printf("Capacidade RAM %d\n", c1.ram.capacidadeEmGigaBytes);
    printf("Potencia Fonte %d\n\n", c1.fonte.potencia);

    printf("Computador c2 %d\n", c2.ref);
    printf("Processador %d\n", c2.processador.ref);
    printf("Velocidade %d\n", c2.processador.velocidadeEmGHz);
    printf("Memoria RAM %d\n", c2.ram.ref);
    printf("Capacidade RAM %d\n", c2.ram.capacidadeEmGigaBytes);
    printf("Potencia Fonte %d\n", c2.fonte.potencia);
    return 0;
}