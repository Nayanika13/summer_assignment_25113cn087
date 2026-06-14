#include <iostream>
using namespace std;

int main() 
{
    int n;    
    cout <<"Enter the number of elements:";
    cin>>n;
    int arr[n],sum=0;
    cout <<"Enter"<<n<<"elements:\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg = (float)sum/n;
    cout<<"Sum ="<<sum<<endl;
    cout<<"Average ="<<avg<<endl;

    return 0;
}