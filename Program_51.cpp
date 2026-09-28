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
    StudentRecord s[3] = {
        {101, "Amit Patil", 85.5f},
        {102, "Sneha Deshmukh", 91.0f},
        {103, "Rohan Kulkarni", 78.5f}
    };

    ofstream out("students.dat", ios::binary);
    for (int i = 0; i < 3; i++) {
        out.write(reinterpret_cast<const char*>(&s[i]), sizeof(StudentRecord));
    }
    out.close();

    ifstream in("students.dat", ios::binary);
    StudentRecord r;
    cout << "== Reading All Records from Binary File ==" << endl;
    while (in.read(reinterpret_cast<char*>(&r), sizeof(StudentRecord))) {
        cout << "Roll: " << r.roll << " | Name: " << r.name << " | Marks: " << r.marks << endl;
    }
    in.close();
    return 0;
}
