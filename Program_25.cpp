#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }
string add(string a, string b) { return a + b; }

int main() {
    cout << "Sum of two ints: " << add(10, 20) << endl;
    cout << "Sum of two doubles: " << add(2.5, 3.7) << endl;
    cout << "Sum of three ints: " << add(10, 20, 30) << endl;
    cout << "Concatenated strings: " << add(string("Hello "), string("World")) << endl;
    return 0;
}

// CIE Day 22
