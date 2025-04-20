/*Q6. Bank Account Class with Constructor 
Design a class BankAccount with: 
• Data: accountNo, holderName, balance 
• Constructor to initialize data 
• display() function 
Create 3 objects and show the use of constructor and display() the on user input value. */
#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    int accountNo;
    string holderName;
    double balance;

public:
    // Constructor to initialize data
    BankAccount(int accNo, string name, double bal) {
        accountNo = accNo;
        holderName = name;
        balance = bal;
    }

    // Function to display account details
    void display() {
        cout << "Account No: " << accountNo << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    int accNo;
    string name;
    double bal;

    // Taking user input for account details
    cout << "Enter Account No: ";
    cin >> accNo;
    cout << "Enter Holder Name: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, name);
    cout << "Enter Balance: ";
    cin >> bal;

    // Creating an object of BankAccount with user input
    BankAccount account(accNo, name, bal);

    // Displaying account details
    cout << "\nAccount Details:" << endl;
    account.display();

    return 0;
}
