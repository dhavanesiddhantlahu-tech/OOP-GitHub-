#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct StudentRecord {
    int roll;
    char name[30];
    float marks;
};

int main() {
    ifstream in("students.dat", ios::binary);
    if (!in) {
        cerr << "Error: Run Program_51 first to generate students.dat" << endl;
        return 1;
    }
    int targetRoll;
    cout << "Enter Roll Number to search in binary file: ";
    cin >> targetRoll;

    StudentRecord r;
    bool found = false;
    int index = 0;
    while (in.read(reinterpret_cast<char*>(&r), sizeof(StudentRecord))) {
        if (r.roll == targetRoll) {
            streamoff offset = static_cast<streamoff>(index) * sizeof(StudentRecord);
            cout << "Record Found at binary offset " << offset << " bytes!" << endl;
            cout << "Roll: " << r.roll << " | Name: " << r.name << " | Marks: " << r.marks << endl;
            found = true;
            break;
        }
        index++;
    }
    if (!found) cout << "Roll number " << targetRoll << " not found." << endl;
    in.close();
    return 0;
}
