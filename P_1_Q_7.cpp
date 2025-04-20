/*Q7. Constructor Overloading 
Create a class Rectangle 
� Create 2 constructors: one takes no parameters and sets default values, another takes length 
and breadth. 
� Display area using a function. 
Create 2 objects using both constructors. */

#include<iostream>
using namespace std;
class Rectangle{
	private:
	int leng, bred;
	float area;
	public:
	Rectangle(){
		leng=6;
		bred=8;
	}
	Rectangle(int len, int bre){
		leng=len;  
		bred=bre;
	}
	void Area(){
		cout<<"Area of rectangle : "<<(leng*bred);
	}
};

int main(){
	Rectangle rect1;
	rect1.Area();
	
	int len,bre;
	cout<<"\n\nPlease enter the value of length and breadth : ";
	cin>>len>>bre;
	Rectangle rect2(len, bre);
	rect2.Area();
	return 0;
}
