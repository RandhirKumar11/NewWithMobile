/*Q9. Array of Objects with Function 
Create a class Employee with id and salary. 
� Use an array of 5 objects 
� Input and display the data using member functions. */

#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	int id;
	string name;
	float salary;
	public:
		void GetData(){
			cout<<"Enter Employee ID : ";
			cin>>id;
			cout<<"Enter Employee Name : ";
			cin.ignore();
			getline(cin, name);
			cout<<"Enter Employee Salary : ";
			cin>>salary;
			cout<<endl;	
		}
		
		void Member(){
			cout<<"\nEmployee ID : "<<id;
			cout<<"\nEmployee Name : "<<name;
			cout<<"\nEmployee Salary : "<<salary;
			cout<<endl;
		}
};

int main(){
	int i,user;
	cout<<"Enter total number of employee : ";
	cin>>user;
	Employee emp[user];
	
	int id;
	string name;
	float salary;
	for(i=0;i<user;i++){
		emp[i].GetData();
	}
	
	cout<<"\n\n---Employee Details---";
	for(i=0;i<user;i++){
		cout<<"\n"<<(i+1)<<". Employee details ";
		emp[i].Member();
	}
	
	return 0;
}

