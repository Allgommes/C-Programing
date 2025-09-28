#include <iostream>
using namespace std;
// programa para ilustrar definicão de calsse em C++

class minhaClasse { // especificação da classe
    private:
    int x;

    public:
    void setValor(int d) { // função menbro
        x = d;
    }
    void getValor() {  // função menbro
        cout << "\nValor = " << x << endl;
    }
};

    int main() {

    minhaClasse obj1, obj2; // criação de dois objetos da classe
    obj1.setValor(10); // chamada de função membro
    obj2.setValor(20); // chamada de função membro
    obj1.getValor(); // chamada de função membro
    obj2.getValor(); // chamada de função membro

    cout << endl;
    system("pause");
    return 0;
    }



