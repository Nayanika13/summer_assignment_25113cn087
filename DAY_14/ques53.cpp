#include <iostream>
using namespace std;

int main() 
{
    int n,a,i;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<" elements:\n";
    for (i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    cout<<"Enter element to search:";
    cin>>a;

    int b=-1;
    for (i=0;i<n;i++) 
    {
        if (arr[i]==a) 
        {
            b=i;
            break;
        }
    }

    if (b!=-1) 
    {
        cout<<"Element at index"<<b<<endl;
    } else 
    {
        cout<<"Element not found in array"<<endl;
    }
    return 0;
}