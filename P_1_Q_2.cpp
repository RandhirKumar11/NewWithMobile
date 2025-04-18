#include <iostream>
using namespace std;
int main() {
    int count=10;
    int count2=20;
    int *const ptr = &count;
    cout<<"Before change the value of count: "<< *ptr <<endl;
    *ptr=15;
    cout<<"Value of count after change : "<< count<< endl;
    cout<<"Value of pointer after change: "<< *ptr <<endl;
    
return 0;

}