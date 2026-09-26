#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) const = 0;
    virtual ~Payment() {}
};

class CardPayment : public Payment {
public:
    void pay(double amount) const override { cout << "Paid Rs. " << amount << " using Card" << endl; }
};

class UpiPayment : public Payment {
public:
    void pay(double amount) const override { cout << "Paid Rs. " << amount << " using UPI" << endl; }
};

class WalletPayment : public Payment {
public:
    void pay(double amount) const override { cout << "Paid Rs. " << amount << " using Mobile Wallet" << endl; }
};

void processPayment(const Payment& p, double amt) { p.pay(amt); }

int main() {
    CardPayment card; UpiPayment upi; WalletPayment wallet;
    processPayment(card, 1500.0);
    processPayment(upi, 800.0);
    processPayment(wallet, 250.0);
    return 0;
}
