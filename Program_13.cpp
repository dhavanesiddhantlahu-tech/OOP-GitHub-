#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNo;
public:
    Vehicle(string r) { regNo = r; }
    void start() { cout << "Vehicle " << regNo << " started" << endl; }
};

class Car : public Vehicle {
public:
    Car(string r) : Vehicle(r) {}
    void openBoot() { cout << "Car boot opened" << endl; }
};

class Bike : public Vehicle {
public:
    Bike(string r) : Vehicle(r) {}
    void helmetReminder() { cout << "Please wear a helmet" << endl; }
};

int main() {
    Car c("MH12AB1234");
    Bike b("MH12CD5678");
    c.start();
    c.openBoot();
    b.start();
    b.helmetReminder();
    return 0;
}
