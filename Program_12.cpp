#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) { name = n; }
    void showPerson() { cout << "Name: " << name << endl; }
};

class Employee : public Person {
protected:
    int employeeId;
public:
    Employee(string n, int id) : Person(n) { employeeId = id; }
    void showEmployee() { cout << "Employee ID: " << employeeId << endl; }
};

class Manager : public Employee {
private:
    int teamSize;
public:
    Manager(string n, int id, int size) : Employee(n, id) { teamSize = size; }
    void showManager() {
        showPerson();
        showEmployee();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m("Ravi", 501, 8);
    m.showManager();
    return 0;
}
