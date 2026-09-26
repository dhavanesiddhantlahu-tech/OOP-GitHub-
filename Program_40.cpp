// Program 40: Employee Payroll Mini-Project
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}
    virtual void calculateSalary() = 0;
    virtual void display() const {
        cout << "ID: " << id << " | Name: " << name;
    }
    virtual ~Employee() {}
};

class SalariedEmployee : public Employee {
    double monthlySalary;
public:
    SalariedEmployee(string n, int i, double sal) : Employee(n, i), monthlySalary(sal) {}
    void calculateSalary() override {
        cout << " | Type: Salaried | Monthly Pay: Rs. " << monthlySalary << endl;
    }
};

class HourlyEmployee : public Employee {
    double hours, rate;
public:
    HourlyEmployee(string n, int i, double h, double r) : Employee(n, i), hours(h), rate(r) {}
    void calculateSalary() override {
        cout << " | Type: Hourly | Total Pay: Rs. " << hours * rate << endl;
    }
};

int main() {
    vector<Employee*> staff;
    staff.push_back(new SalariedEmployee("Amit Sharma", 101, 55000));
    staff.push_back(new HourlyEmployee("Pooja Patil", 102, 40, 500));

    cout << "--- Payroll Summary ---" << endl;
    for (const auto& emp : staff) {
        emp->display();
        emp->calculateSalary();
    }

    for (auto& emp : staff) delete emp;
    return 0;
}
