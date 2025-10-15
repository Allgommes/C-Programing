#include <iostream>
#include <string>
using namespace std;

class Empregado 
{
    public:
        string nome;

};

int main()
{
    Empregado empregado1;
    empregado1.nome="Alvaro Faria";
    cout << empregado1.nome << endl;

    return 0;

}