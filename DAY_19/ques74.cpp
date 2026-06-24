#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout<<"Enter number of rows and columns:";
    cin>>rows>>cols;

    int a[100][100], b[100][100], diff[100][100];

    cout<<"Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> a[i][j];
        }
    }

    cout <<"Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    cout<<"Difference of the matrices:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}