#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("notes.txt");
    if (!inFile) {
        cerr << "Error: Could not open notes.txt" << endl;
        return 1;
    }
    string line;
    int lineNum = 1;
    cout << "== Content of notes.txt (with line numbers) ==" << endl;
    while (getline(inFile, line)) {
        cout << lineNum++ << ": " << line << endl;
    }
    inFile.close();
    return 0;
}
