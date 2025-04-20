/* Q10. Static Data and Function 
Create a class Counter with a static data member count. 
� Each time an object is created, increment count. 
� Show the total number of objects created using a static function. */

#include<iostream>
using namespace std;
class Counter{
	static int count;
	
	public:
		Counter(){
			count++;
		}
		
		static int ShowCounter(){
			return count;
		}	
};

int Counter::count = 0;

int main(){
	Counter c1;
	Counter c2;
	Counter c3;
	Counter c4;
	Counter c5;
	Counter c6;
	Counter c7;	
	cout<<"Total number of counting = "<<Counter::ShowCounter()<<endl;
	return 0; 
}
