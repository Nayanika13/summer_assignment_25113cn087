#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for (int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    int a;
    cout<<"Enter element whose frequency is to be found:";
    cin>>a;
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==a)
        {
            count++;
        }
    }
    cout<<"Frequency of"<<a<<"is:"<<count<<endl;
    return 0;
}