#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

int main() {
    ofstream outFile("students.txt", ios::app);
    if (!outFile) {
        cerr << "Error opening students.txt" << endl;
        return 1;
    }
    int roll;
    string name, course, mobile;
    double marks;

    cout << "Enter Roll Number: "; cin >> roll;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Name: "; getline(cin, name);
    cout << "Enter Course: "; getline(cin, course);
    cout << "Enter Mobile Number: "; getline(cin, mobile);
    cout << "Enter Marks: "; cin >> marks;

    outFile << roll << "|" << name << "|" << course << "|" << mobile << "|" << marks << "\n";
    outFile.close();
    cout << "Extended student record saved successfully." << endl;
    return 0;
}
