#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}
    Counter& operator++() { ++value; return *this; }
    Counter operator++(int) { Counter old = *this; ++value; return old; }
    Counter& operator--() { --value; return *this; }
    Counter operator--(int) { Counter old = *this; --value; return old; }
    void display() const { cout << "Value: " << value << endl; }
};

int main() {
    Counter c(10);
    ++c;
    cout << "After prefix increment: "; c.display();
    c++;
    cout << "After postfix increment: "; c.display();
    --c;
    cout << "After prefix decrement: "; c.display();
    c--;
    cout << "After postfix decrement: "; c.display();
    return 0;
}

// CIE Day 22
