

#include <iostream>
using namespace std;

int main() 
{
    long long x,n;
    cout<<"enter the number and power to which its raised:";
    cin >>x>>n;
    long long result=1;

    for(int i =0;i < n;i++)
     {
        result*=x;
    }

    cout<<result<<endl;
    return 0;
}