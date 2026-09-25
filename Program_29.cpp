#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& obj) const { return Complex(real + obj.real, imag + obj.imag); }
    Complex operator-(const Complex& obj) const { return Complex(real - obj.real, imag - obj.imag); }
    void display() const { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex c1(5, 7), c2(2, 3);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    cout << "Sum: "; sum.display();
    cout << "Difference: "; diff.display();
    return 0;
}

// CIE Day 22
