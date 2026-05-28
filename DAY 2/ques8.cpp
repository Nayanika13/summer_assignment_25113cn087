//program to check whether a number is palindrome

#include <iostream>
using namespace std;

int main()
 {
    int num, original, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) 
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (original == reversed)
        cout << "Palindrome number" << endl;
    else
        cout << "Not a palindrome number" << endl;

    return 0;
}