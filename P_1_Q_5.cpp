#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    float marks;
};

int main() {
    Student students[3];
    Student *ptr = students;

    // Input data using pointer
    for(int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i+1 << ":\n";
        cout << "Roll No: ";
        cin >> (ptr + i)->rollNo;
        cout << "Marks: ";
        cin >> (ptr + i)->marks;
    }

    // Print data using pointer
    cout << "\nStudent Details:\n";
    for(int i = 0; i < 3; i++) {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "Roll No: " << (ptr + i)->rollNo << endl;
        cout << "Marks: " << (ptr + i)->marks << endl;
    }
return 0;
}