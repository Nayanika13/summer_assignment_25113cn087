#include <iostream>
using namespace std;

int main() 
{
    int n,k;

    cout<<"Enter the number of elements:";
    cin >> n;
    int arr[n];

    cout <<"Enter the elements in sorted order:";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> k;

    int low=0, high=n - 1;
    int found=-1;

    while (low<=high) 
    {
        int mid=(low + high)/2;

        if (arr[mid] == k) 
        {
            found = mid;
            break;
        }
        else if (k<arr[mid]) 
        {
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    if (found!=-1)
        cout<<"Element found at index"<<found;
    else
        cout<<"Element not found";

    return 0;
}