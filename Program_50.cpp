#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("navigation.txt", ios::in | ios::out | ios::trunc);
    if (!file) {
        cerr << "Error creating navigation.txt" << endl;
        return 1;
    }
    file << "ABCDEFGH";
    file.flush();

    cout << "File size / write position: " << file.tellp() << " bytes" << endl;
    file.seekg(2, ios::beg);
    char ch3;
    file.get(ch3);
    cout << "Character at offset 2: " << ch3 << endl;

    // Modification task: Read last character using seekg
    file.seekg(-1, ios::end);
    char lastCh;
    file.get(lastCh);
    cout << "Last character in file: " << lastCh << endl;

    file.close();
    return 0;
}
