#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() { cout << "Base destructor executed" << endl; }
};

class Derived : public Base {
public:
    ~Derived() override { cout << "Derived destructor executed" << endl; }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;
    return 0;
}
