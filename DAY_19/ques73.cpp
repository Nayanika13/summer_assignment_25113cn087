#include <iostream>
using namespace std;

int main() 
{
    int row, col;

    cout<<"Enter number of rows and columns:";
    cin >> row>>col;

    int a[100][100], b[100][100], sum[100][100];

    cout <<"Enter elements of first matrix:\n";
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> a[i][j];
        }
    }

    cout <<"Enter elements of second matrix:\n";
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of the matrices:\n";
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}