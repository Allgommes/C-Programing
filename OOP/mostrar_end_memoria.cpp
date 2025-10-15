// programa que mostre alguns endereços de memoria para fim de apredizado
#include <stdio.h>
#include <iostream>
using namespace std;




int main() {
    int minhaVariavel=10;
    int* ponteiroParaMinhaVariavel=&minhaVariavel;

    cout << "Endereco de memoria da variavel: " << &minhaVariavel << endl;
    

    return 0;
}