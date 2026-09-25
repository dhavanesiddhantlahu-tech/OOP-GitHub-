#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const { return 0.0; }
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double l, w;
public:
    Rectangle(double len, double wid) : l(len), w(wid) {}
    double area() const override { return l * w; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double rad) : r(rad) {}
    double area() const override { return 3.14159 * r * r; }
};

void printArea(const Shape& s) {
    cout << "Area: " << s.area() << endl;
}

int main() {
    Rectangle rect(5.0, 4.0);
    Circle circ(3.0);
    printArea(rect);
    printArea(circ);
    return 0;
}
