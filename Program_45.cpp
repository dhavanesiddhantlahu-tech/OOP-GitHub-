#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(static_cast<unsigned char>(ch));
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    ifstream inFile("notes.txt");
    if (!inFile) {
        cerr << "Error: Could not open notes.txt" << endl;
        return 1;
    }
    int lines = 0, words = 0, chars = 0, vowels = 0, consonants = 0, digits = 0, spaces = 0;
    bool inWord = false;
    char ch;

    while (inFile.get(ch)) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(static_cast<unsigned char>(ch))) {
            if (ch == ' ') spaces++;
            inWord = false;
        } else if (!inWord) {
            words++;
            inWord = true;
        }
        if (isalpha(static_cast<unsigned char>(ch))) {
            if (isVowel(ch)) vowels++;
            else consonants++;
        } else if (isdigit(static_cast<unsigned char>(ch))) {
            digits++;
        }
    }
    inFile.close();

    cout << "== File Statistics for notes.txt ==" << endl;
    cout << "Lines: " << lines << "\nWords: " << words << "\nCharacters: " << chars << endl;
    cout << "Vowels: " << vowels << "\nConsonants: " << consonants << "\nDigits: " << digits << "\nSpaces: " << spaces << endl;
    return 0;
}
