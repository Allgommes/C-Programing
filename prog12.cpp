#include <iostream>
#include <string>

using namespace std;


// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// Getters e Setters
//Public And Private Access Specifiers

class Employee {
    public:
    string name;

    void set_salary(double potencial_salary){
        salary = potencial_salary;
    }
    double get_salary(){
        return salary;
    }

    private:
    double salary;


};

int main() {
    Employee employee1;
    employee1.name="Alvaro";
    cout << employee1.name << endl;

    employee1.set_salary(5000);
    cout << employee1.get_salary() << endl;

    return 0;
}