#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
public:
    Distance(int m = 0) : meters(m) {}
    bool operator>(const Distance& d) const { return meters > d.meters; }
    bool operator==(const Distance& d) const { return meters == d.meters; }
    void display() const { cout << meters << " meters" << endl; }
};

int main() {
    Distance d1(150), d2(120), d3(150);
    cout << "d1 > d2: " << (d1 > d2 ? "True" : "False") << endl;
    cout << "d1 == d3: " << (d1 == d3 ? "True" : "False") << endl;
    return 0;
}



