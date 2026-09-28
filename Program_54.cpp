#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string fname = "notes.txt";
    ifstream in(fname);
    if (!in) {
        cerr << "Error opening " << fname << endl;
        return 1;
    }
    int l = 0, w = 0, c = 0, vowels = 0, consonants = 0, digits = 0, spaces = 0;
    bool inWord = false;
    char ch;
    while (in.get(ch)) {
        c++;
        if (ch == '\n') l++;
        if (isspace(static_cast<unsigned char>(ch))) {
            if (ch == ' ') spaces++;
            inWord = false;
        } else if (!inWord) {
            w++;
            inWord = true;
        }
        char lower = tolower(static_cast<unsigned char>(ch));
        if (isalpha(static_cast<unsigned char>(ch))) {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') vowels++;
            else consonants++;
        } else if (isdigit(static_cast<unsigned char>(ch))) {
            digits++;
        }
    }
    in.close();

    ofstream report("report.txt");
    report << "== Summary File Statistics Report ==" << endl;
    report << "Source File: " << fname << "\nLines: " << l << "\nWords: " << w << "\nCharacters: " << c << endl;
    report << "Vowels: " << vowels << "\nConsonants: " << consonants << "\nDigits: " << digits << "\nSpaces: " << spaces << endl;
    report.close();
    cout << "Analysis complete. Report written to report.txt" << endl;
    return 0;
}
