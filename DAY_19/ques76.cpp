#include <iostream>
using namespace std;

int main() 
{
    int n;    
    cout<<"Enter the order of the square matrix:";
    cin>>n;

    int a[100][100];
    int sum=0;

    cout<<"Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin>>a[i][j];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        sum += a[i][i];
    }

    cout << "Sum of diagonal elements = " << sum << endl;
    return 0;
}