#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

string cleanWord(const string& raw) {
    string cleaned = "";
    for (char c : raw) {
        if (isalnum(static_cast<unsigned char>(c))) cleaned += tolower(static_cast<unsigned char>(c));
    }
    return cleaned;
}

int main() {
    ifstream inFile("notes.txt");
    if (!inFile) {
        cerr << "Error: Could not open notes.txt" << endl;
        return 1;
    }
    string target;
    cout << "Enter word to search: ";
    cin >> target;
    string normTarget = cleanWord(target);

    string word;
    int count = 0;
    while (inFile >> word) {
        if (cleanWord(word) == normTarget) count++;
    }
    inFile.close();
    cout << "Word '" << target << "' found " << count << " times (case-insensitive)." << endl;
    return 0;
}
