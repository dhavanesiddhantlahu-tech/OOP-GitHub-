#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double l, w;
public:
    Rectangle(double len, double wid) : l(len), w(wid) {}
    double area() const override { return l * w; }
};

class Triangle : public Shape {
    double b, h;
public:
    Triangle(double base, double height) : b(base), h(height) {}
    double area() const override { return 0.5 * b * h; }
};

int main() {
    Rectangle r(8.0, 4.0);
    Triangle t(6.0, 5.0);
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Triangle Area: " << t.area() << endl;
    return 0;
}
