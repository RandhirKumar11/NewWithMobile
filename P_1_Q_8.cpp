/*Q8. Copy Constructor Validation 
Create a class Product with data members: id, price. 
� Write a constructor and a copy constructor. 
� Create one object using constructor. 
� Create another using copy constructor and show values are copied correctly. */

#include<iostream>
using namespace std;
class Product{
	private:
		int id;
		float price;
	public:
	Product(int i, float p){
		id=i;
		price=p;
	}
	Product(Product &g){
		id=g.id;
		price=g.price;
	}
	void display(){
		cout<<"\nID : "<<id;
		cout<<"\nPrice : "<<price;
	}
};

int main(){
	int id;
	float price;
	cout<<"Please enter the value of id and price of product : ";
	cin>>id>>price;
	Product pro1(id, price);
	cout<<"\nDetails of Product 1 :-- ";
	pro1.display();
	
	Product pro2(pro1);
	cout<<"\nDetails of Product 2 :-- ";
	pro2.display();
	
	return 0;
}
