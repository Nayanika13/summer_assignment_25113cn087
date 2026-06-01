// 

#include <iostream>
using namespace std;

int factorial(int n) 
{
    int fact=1;
    for(int i=1;i<= n;i++)
     {
        fact*=i;
    }
    return fact;
}

int main() {
    int num, originalnum, remainder;
    int sum=0;
    cout <<"Enter a number:";
    cin>>num;

    originalnum=num;

    while (num>0)
     {
        remainder=num%10;
        sum+=factorial(remainder);
        num /=10;
    }

    if (sum ==originalnum)
    {
        cout <<originalnum <<" is a strong number";
    }
    else
        cout << originalnum << " is not a strong number";

    return 0;
}