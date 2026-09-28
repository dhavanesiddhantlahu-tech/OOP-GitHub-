#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    ifstream in("students.txt");
    ofstream out("temp.txt");
    if (!in || !out) {
        cerr << "Error opening file(s)." << endl;
        return 1;
    }
    int targetRoll;
    cout << "Enter Roll Number to update: ";
    cin >> targetRoll;
    cin.ignore();
    string newName;
    double newMarks;
    cout << "Enter New Name: "; getline(cin, newName);
    cout << "Enter New Marks: "; cin >> newMarks;

    string line;
    bool found = false;
    while (getline(in, line)) {
        stringstream ss(line);
        string r, n, c, m, mk;
        if (getline(ss, r, '|') && getline(ss, n, '|') && getline(ss, c, '|') && getline(ss, m, '|') && getline(ss, mk)) {
            if (stoi(r) == targetRoll) {
                out << r << "|" << newName << "|" << c << "|" << m << "|" << newMarks << "\n";
                found = true;
            } else {
                out << line << "\n";
            }
        }
    }
    in.close();
    out.close();

    if (found) {
        remove("students.txt");
        rename("temp.txt", "students.txt");
        cout << "Record updated successfully." << endl;
    } else {
        remove("temp.txt");
        cout << "Roll number not found." << endl;
    }
    return 0;
}
