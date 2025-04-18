#include <iostream>
using namespace std;
int main() {
    int arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
    cout<<"Enter the hieght of person in cm";
    
    cin>>arr[i];
    }
    int *ptr=arr;
    for(int i=0;i<5;i++)
    {
        cout<<"Hieght of person is:-"<<*(ptr+i)<<"\n";
        sum=sum+*(ptr+i);
    }
    cout<<"\nAverage of hieght="<<sum/5.0;
return 0;
}