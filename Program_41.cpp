#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("notes.txt");
    if (!outFile) {
        cerr << "Error: Could not create notes.txt" << endl;
        return 1;
    }
    cout << "Enter 3 lines of text to write to notes.txt:" << endl;
    for (int i = 1; i <= 3; i++) {
        string line;
        cout << "Line " << i << ": ";
        getline(cin, line);
        outFile << line << "\n";
    }
    outFile.close();
    cout << "Successfully saved 3 lines to notes.txt" << endl;
    return 0;
}
