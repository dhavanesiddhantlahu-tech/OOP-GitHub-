#include <iostream>
using namespace std;

class Balance {
private:
    double amount;
public:
    Balance(double amt = 0.0) : amount(amt) {}
    Balance operator-() const { return Balance(-amount); }
    void display() const { cout << "Balance: Rs. " << amount << endl; }
};

int main() {
    Balance opening(5000.0);
    Balance debt = -opening;
    cout << "Original "; opening.display();
    cout << "Negated "; debt.display();
    return 0;
}

// CIE Day 22


