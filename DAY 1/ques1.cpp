//program to calculate sum of first n natural numbers
#include<iostream>
using namespace std;

int main()
{
    int n,sum =0;
    cout << " Enter a number = ";
    cin >> n;

    for( int i=1;i<=n;i++)
    {
        sum +=i;
    }
    cout << "sum of first " << n << 
    "natural numbers ="<<sum;

    return 0;
}