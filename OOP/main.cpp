// Class definition with consistent spacing

#include <iostream>
using namespace std;


class Example {
private:
	int attribute1;
	double attribute2;

public:
	// Method declarations with consistent spacing
	void setValue(int value);
	int getValue() const;
};

// Function implementation with consistent spacing and bracing
void Example::setValue(int value) {
	if (value > 0) {
		attribute1 = value;
	}
}

int main() {
    int a=5;
    int b=10;
    int c=a+b;

    cout << "Soma de a + b = " << c << endl;
    return 0;
}