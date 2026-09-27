#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "Error: Could not open students.txt" << endl;
        return 1;
    }
    cout << left << setw(8) << "Roll" << setw(18) << "Name" << setw(12) << "Course" << setw(14) << "Mobile" << setw(8) << "Marks" << endl;
    cout << string(60, '-') << endl;

    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        string r, n, c, m, mk;
        if (getline(ss, r, '|') && getline(ss, n, '|') && getline(ss, c, '|') && getline(ss, m, '|') && getline(ss, mk)) {
            cout << left << setw(8) << r << setw(18) << n << setw(12) << c << setw(14) << m << setw(8) << mk << endl;
        }
    }
    inFile.close();
    return 0;
}
