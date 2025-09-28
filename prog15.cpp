#include <iostream>
#include <string.h>

using namespace std;


class Employee {
    public:
    string name;

    void set_salary(double potencial_salary) {
        if(potencial_salary <0) salary=0;    
            else salary=potencial_salary;
    }
    double get_salary(){
        return salary;
    }
    void print_bonus() {
        cout << "Bonus: " << calculate_bonus() << endl;
    }

    private:
    double salary;

    double calculate_bonus() {
        return salary * 0.10;
    }
};

void get(Employee &employee1);

int main() {
	Employee employee1;
    employee1.name = "Alvaro";
    cout << employee1.name << endl;

    employee1.set_salary(5000);

	cout << "salary: " << employee1.get_salary() << endl;

    employee1.print_bonus();
   
	return 0;
}



