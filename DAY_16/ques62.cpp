#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:";
    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }

    int Freq = 0;
    int Element;

    for (int i = 0; i < n; i++) 
    {
        int count = 0;

        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }

        if (count > Freq) 
        {
            Freq = count;
            Element = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << Element << endl;
    cout << "Frequency: " << Freq << endl;

    return 0;
}