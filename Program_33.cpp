#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const { cout << "Animal sound" << endl; }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override { cout << "Dog barks" << endl; }
};

class Cow : public Animal {
public:
    void sound() const override { cout << "Cow moos" << endl; }
};

int main() {
    Dog d; Cow c;
    Animal* a = &d;
    a->sound();
    a = &c;
    a->sound();
    return 0;
}
