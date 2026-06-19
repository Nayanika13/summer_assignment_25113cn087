#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout<<"Enter the size of the array:";
    cin>>n;

    int arr[n];

    cout<<"Enter" << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }

    int beg = 0, end = n - 1;
    while (beg < end) {
        swap(arr[beg], arr[end]);
        beg++;
        end--;
    }

    cout <<"Reversed array:";
    for (int i=0;i<n;i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}