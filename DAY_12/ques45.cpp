#include <iostream>
using namespace std;

bool Palindrome(int num)
{
    int original=num;
    int reverse=0;

    while (num>0)
    {
        int num2 =num%10;
        reverse=reverse*10+num2;
        num/=10;
    }
    return (original==reverse);
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if (Palindrome(num))
        cout<<num<<"is a palindrome number";
    else
        cout<<num<<"is not a palindrome number";
    return 0;
}