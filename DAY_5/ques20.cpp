// program to print largest prime factor

#include <iostream>
using namespace std;

int main()
 {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    long long largestprimefactor=-1;

    while (num%2==0)
     {
        largestprimefactor=2;
        num /=2;
     }

    for (long long i=3;i*i<=num;i+=2) 
    {
        while (num%i==0)
         {
            largestprimefactor=i;
            num/=i;
         }
    
        if(num>2) 
        {
        largestprimefactor=num;
        }
    }
    cout <<"Largest Prime Factor="<<largestprimefactor;
    return 0;
}