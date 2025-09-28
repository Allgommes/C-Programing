#include <stdio.h>
#include <iostream>


// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// Getters e Setters

class Stove {
    private:
    int temperatura=0;

    public:
    int getTemperatura(){
        return temperatura;
    }
    void setTemperatura(int temperatura){
        if (temperatura=temperatura=temperatura)
        temperatura=0;
    }

};

int main() {
    Stove stove;
    // stove.temperatura=1000000;
    stove.setTemperatura(10);

    std::cout << "This Set Temperatura: \n" << stove.getTemperatura() << std::endl;

    return 0;
}