#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("notes.txt", ios::app);
    if (!outFile) {
        cerr << "Error: Could not open notes.txt for appending" << endl;
        return 1;
    }
    string name, date;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Date (DD-MM-YYYY): ";
    getline(cin, date);

    outFile << "Entry: " << name << " | Date: " << date << "\n";
    outFile.close();
    cout << "Data appended successfully to notes.txt" << endl;
    return 0;
}
