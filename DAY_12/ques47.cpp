#include <iostream>
using namespace std;

bool Fibonacci(int n) 
{
    int a=0,b=1,c;
    if (n==0||n==1)
    return true;

    while (b<n) 
    {
        c=a + b;
        a=b;
        b=c;
    }
    return (b==n);
}
int main()
{
    int num;

    cout<<"Enter a number:";
    cin>>num;
    if (Fibonacci(num))
        cout<<num<<" is a Fibonacci number";
    else
        cout<<num<<"is not a Fibonacci number";
    return 0;
}