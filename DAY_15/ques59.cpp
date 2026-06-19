#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    int arr[n];

    cout <<"Enter the elements of array:";
    for (int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    int k;
    cout <<"Enter the number of positions to rotate:";
    cin >> k;

    k = k % n;

    for (int i = 0; i < k; i++) 
    {
        int last = arr[n - 1];

        for (int j = n - 1; j > 0; j--) 
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = last;
    }

    cout << "Array after right rotation:";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}