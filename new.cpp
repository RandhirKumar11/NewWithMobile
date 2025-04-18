#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter any "<<n<<" elements of the array: ";
    // Taking input for the array elements
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+arr[i];
    }
    cout<<ans<<endl;

    return 0;
}