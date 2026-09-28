#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

void addStudent() {
    ofstream out("student_records.txt", ios::app);
    int roll; string name; double marks;
    cout << "Enter Roll Number: "; cin >> roll;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Name: "; getline(cin, name);
    do {
        cout << "Enter Marks (0 to 100): "; cin >> marks;
        if (marks < 0 || marks > 100) cout << "Invalid marks! Must be 0-100." << endl;
    } while (marks < 0 || marks > 100);

    out << roll << "|" << name << "|" << marks << "\n";
    out.close();
    cout << "Student saved successfully." << endl;
}

void displayStudents() {
    ifstream in("student_records.txt");
    if (!in) { cout << "No records found." << endl; return; }
    string line;
    cout << "\nRoll\tName\t\tMarks\n" << string(30, '-') << endl;
    while (getline(in, line)) {
        stringstream ss(line);
        string r, n, m;
        if (getline(ss, r, '|') && getline(ss, n, '|') && getline(ss, m)) {
            cout << r << "\t" << n << "\t\t" << m << endl;
        }
    }
    in.close();
}

int main() {
    int ch;
    do {
        cout << "\n--- Student Record Manager ---\n1. Add Student\n2. Display All\n0. Exit\nEnter Choice: ";
        cin >> ch;
        if (ch == 1) addStudent();
        else if (ch == 2) displayStudents();
    } while (ch != 0);
    return 0;
}
