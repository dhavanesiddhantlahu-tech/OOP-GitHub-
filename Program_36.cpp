#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual void displayName() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double l, w;
public:
    Rectangle(double len, double wid) : l(len), w(wid) {}
    double area() const override { return l * w; }
    void displayName() const override { cout << "Rectangle"; }
};

class Triangle : public Shape {
    double b, h;
public:
    Triangle(double base, double height) : b(base), h(height) {}
    double area() const override { return 0.5 * b * h; }
    void displayName() const override { cout << "Triangle"; }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Rectangle(5.0, 3.0));
    shapes.push_back(new Triangle(4.0, 6.0));

    for (size_t i = 0; i < shapes.size(); i++) {
        shapes[i]->displayName();
        cout << " Area: " << shapes[i]->area() << endl;
        delete shapes[i];
    }
    return 0;
}
