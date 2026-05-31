// program to check the armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num, originalNum, remainder, digits = 0;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    int temp = num;
    while (temp != 0) 
    {
     digits++;
    temp /= 10;
    }
temp = num;
 while (temp != 0)
  {
    remainder = temp % 10;
    result += pow(remainder, digits);
    temp /= 10;
}

 if (result == originalNum)
     cout << originalNum << " is an Armstrong number.";
 else
     cout << originalNum << " is not an Armstrong number.";
return 0;
}