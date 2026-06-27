#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout <<"Enter the number of rows and columns:";
    cin>>rows>>cols;

    int a[100][100];

    cout<<"Enter the elements of the matrix:\n";
    for (int i=0;i<rows;i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin>>a[i][j];
        }
    }

    cout <<"Column-wise sum:\n";
    for (int j = 0; j<cols; j++) 
    {
        int sum = 0;
        for (int i = 0; i < rows; i++) 
        {
            sum += a[i][j];
        }
        cout <<"Sum of column"<< j + 1 << " =" << sum << endl;
    }
    return 0;
}