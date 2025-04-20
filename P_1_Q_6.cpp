/*Q6. Bank Account Class with Constructor 
Design a class BankAccount with: 
• Data: accountNo, holderName, balance 
• Constructor to initialize data 
• display() function 
Create 3 objects and show the use of constructor and display(). */

#include <iostream>
#include <string>
using namespace std;

//Design a class BankAccount with: 
//• Data: accountNo, holderName, balance 
class BankAccount {
	private:
	    int accountNo;
	    string holderName;
	    double balance;
	
	public:
	//• Constructor to initialize data 
	BankAccount(int acc, string name, double bal){
		accountNo=acc;
		holderName=name;
		balance=bal;	
	}
	
	//• display() function 
	void Display(){
		cout<<"\nAccount Number : "<<accountNo;
		cout<<"\nAccount Holder-Name : "<<holderName;
		cout<<"\nTotal Balance : "<<balance;
	}
};

int main(){
	
//	Create 3 objects of the constructor and pass the value as a parameter
	BankAccount acc1(1001,"Alice",55000.00);
	BankAccount acc2(1002,"Liza",65000.00);
	BankAccount acc3(1003,"Nilon",76000.00);
	
//	Display the data with the help of Display() and its calling is three times.
	cout<<"Account Information of 1st person ";
	acc1.Display();	
	cout<<"\n\nAccount Information of 2nd person ";	
	acc2.Display();
	cout<<"\n\nAccount Information of 3rd person ";	
	acc3.Display();
	return 0;	
}