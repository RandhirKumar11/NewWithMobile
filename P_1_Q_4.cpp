#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    float price;
};

int main() {
    // Declare object and pointer
    Book book;
    Book* ptr = &book;
    
    // Input values using pointer
    cout << "Enter book title: ";
     cin>>ptr->title;
    
    cout << "Enter book price: ";
    cin >> ptr->price;
    
    // Display details using pointer
    cout << "\nBook Details:" << endl;
    cout << "Title: " << ptr->title << endl;
    cout << "Price: $" << ptr->price << endl;
    return 0;
}