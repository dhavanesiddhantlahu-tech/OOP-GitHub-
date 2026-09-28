#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fname;
    ifstream file;
    while (true) {
        cout << "Enter valid file name to open (or 'notes.txt'): ";
        cin >> fname;
        file.open(fname);
        if (file.is_open()) break;
        cout << "Error: File could not be opened. Try again." << endl;
        file.clear();
    }
    cout << "File opened successfully!" << endl;
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    if (file.eof()) cout << "[Stream State: EOF reached normally]" << endl;
    if (file.fail() && !file.eof()) cerr << "[Stream State: Logical read failure]" << endl;
    if (file.bad()) cerr << "[Stream State: Severe unrecoverable I/O error]" << endl;
    file.close();
    return 0;
}
