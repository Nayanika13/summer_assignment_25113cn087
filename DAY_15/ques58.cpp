#include <iostream>
using namespace std;

void left(int arr[], int n, int d) 
{
    d = d % n;
    int temp[d];
    for (int i=0;i<d;i++) 
    {

        temp[i] = arr[i];
    }

    for (int i=d;i<n;i++) 
    {
        arr[i - d] = arr[i];
    }

    for (int i=0;i<d;i++) 
    {
        arr[n - d + i] = temp[i];
    }
}

int main() 
{
    int n, d;
    cout <<"Enter size of array:";
    cin >> n;

    int arr[n];

    cout <<"Enter array elements";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate left: ";
    cin >> d;

    left(arr, n, d);

    cout <<"Array after left rotation:";
    for (int i = 0; i < n; i++) 
    {
        cout <<arr[i]<< " ";
    }

    return 0;
}