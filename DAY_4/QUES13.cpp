// program to generate a fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter the number of terms";
    cin >> n;
    int first=0,second=1,next;
    cout<<"fibonaaci series";
    for(int i =0;i<n;i++)
    {
        cout << first << " ";
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}