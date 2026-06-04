

#include <iostream>
using namespace std;

int main() 
{
    long long binary;
    cout << " Enter the binary: ";
    cin>>binary;
    int decimal=0;
    int base=1;

    while(binary>0)
     {
        int lastDigit=binary%10;
        decimal+=lastDigit*base;
        base*=2;
        binary/=10;
    }
    cout <<decimal<<endl;
    return 0;
}