#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream src("notes.txt");
    ofstream dest("cpp_lines.txt");
    if (!src || !dest) {
        cerr << "Error: Source or Destination file failed to open." << endl;
        return 1;
    }
    string line;
    int copied = 0;
    while (getline(src, line)) {
        if (line.find("C++") != string::npos) {
            dest << line << "\n";
            copied++;
        }
    }
    src.close();
    dest.close();
    cout << "Copied " << copied << " matching C++ lines to cpp_lines.txt" << endl;
    return 0;
}
