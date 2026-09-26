#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() const { cout << "Base object" << endl; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void display() const override { cout << "Derived object" << endl; }
};

void displayByValue(Base b) { b.display(); }
void displayByReference(const Base& b) { b.display(); }
void displayByPointer(const Base* b) { b->display(); }

int main() {
    Derived d;
    cout << "By Value: "; displayByValue(d);
    cout << "By Reference: "; displayByReference(d);
    cout << "By Pointer: "; displayByPointer(&d);
    return 0;
}
