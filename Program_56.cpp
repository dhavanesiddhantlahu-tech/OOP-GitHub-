#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <cstdio>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;
    Book(int i, string t, string a, bool iss = false) : id(i), title(t), author(a), issued(iss) {}
    string serialize() const {
        return to_string(id) + "|" + title + "|" + author + "|" + (issued ? "1" : "0");
    }
    void display() const {
        cout << "ID: " << id << " | Title: " << title << " | Author: " << author 
             << " | Status: " << (issued ? "Issued" : "Available") << endl;
    }
};

void addBook() {
    int id; string title, author;
    cout << "Enter Book ID: "; cin >> id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Title: "; getline(cin, title);
    cout << "Enter Author: "; getline(cin, author);
    Book b(id, title, author);
    ofstream out("library_books.txt", ios::app);
    out << b.serialize() << "\n";
    out.close();
    cout << "Book recorded." << endl;
}

void displayBooks() {
    ifstream in("library_books.txt");
    if (!in) { cout << "No library records found." << endl; return; }
    string line;
    cout << "\n== Library Catalog ==" << endl;
    while (getline(in, line)) {
        stringstream ss(line);
        string id, t, a, iss;
        if (getline(ss, id, '|') && getline(ss, t, '|') && getline(ss, a, '|') && getline(ss, iss)) {
            Book b(stoi(id), t, a, iss == "1");
            b.display();
        }
    }
    in.close();
}

int main() {
    int ch;
    do {
        cout << "\n--- Library Management System ---\n1. Add Book\n2. Display All\n0. Exit\nEnter Choice: ";
        cin >> ch;
        if (ch == 1) addBook();
        else if (ch == 2) displayBooks();
    } while (ch != 0);
    return 0;
}
