#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;    
    cout<<"Enter number of rows and columns:";
    cin>>rows>>cols;

    int a[100][100];
    cout<<"Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >>a[i][j];
        }
    }

    cout<<"Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            cout <<a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}