#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    friend Complex operator+(int val, const Complex& c);
    friend Complex operator-(int val, const Complex& c);
    void display() const { cout << real << " + " << imag << "i" << endl; }
};

Complex operator+(int val, const Complex& c) { return Complex(val + c.real, c.imag); }
Complex operator-(int val, const Complex& c) { return Complex(val - c.real, -c.imag); }

int main() {
    Complex c(2, 3);
    Complex resAdd = 10 + c;
    Complex resSub = 10 - c;
    cout << "10 + (2+3i): "; resAdd.display();
    cout << "10 - (2+3i): "; resSub.display();
    return 0;
}

// CIE Day 22
