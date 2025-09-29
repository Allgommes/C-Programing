/*
Escreva um programa em C++ que cria uma classe chamada
Medida, a qual possui dois itens de dados (atributos): metro e cenmetro. Além
disso, a classe Medida tem três funções: setMedida(), que define os valores dos
itens de dados, getMedida(), que requisita ao usuário entrar com valores das
porções metro e centimetro da medida, e a função mostraDados(), que exibe os
valores armazenados nos dois itens. Para elaborar esse programa, você deve criar
uma classe que atenda a esses requisitos e criar dois objetos medida (m1 e m2).
O objeto m1 deve ter seus itens inicializados com a função setMedida(), enquanto
o objeto m2 usa a função getMedida() para solicitar os dados do usuário. Note
que você deve criar essas funções-membros e chamá-las a parr da função main()
juntamente com a criação de objetos da classe Medida.
*/


#include <iostream>
using namespace std;

class Medida {
  private:
  int metro;
  double centimetro;

  public:
  void setMedida(int m, double c) {
    metro=m;
    centimetro=c;
  }
  void getMedida() {
    cout << "\nEntre com a medida em metros: ";
    cin >> metro;
    cout << "\nEntre com a medida em centimetros: ";
    cin >> centimetro;
  }

  void mostraMedida() {
    cout << (metro + centimetro/100) << " metros.\n" << endl;
  }
}; // Add closing brace for class

int main() 
{
    Medida m1, m2;
    m1.setMedida(25, 10);
    m2.getMedida();
    
    cout << "\nMedida 1 = "; m1.mostraMedida(); 
    cout << "\nMedida 2 = "; m2.mostraMedida(); 

    cout << endl;
    system("pause");
    return 0;
}

