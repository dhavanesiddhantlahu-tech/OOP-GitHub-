#include <iostream>
using namespace std;

class Base {
public:
    void display() const { cout << "Base display (Static Binding)" << endl; }
};

class Derived : public Base {
public:
    void display() const { cout << "Derived display (Direct Call)" << endl; }
};

int main() {
    Derived d;
    Base* ptr = &d;
    ptr->display();
    d.display();
    return 0;
}
