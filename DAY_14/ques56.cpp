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
    cout<<"Duplicate elements are:";
    bool found=false;
    for (int i=0;i<n;i++) 
    {
     bool checked = false;

        for (int k=0;k<i;k++) 
        {
            if (arr[i]==arr[k]) 
            {
            checked=true;
                break;
            }
        }

        if (checked) continue;

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;

    return 0;
}