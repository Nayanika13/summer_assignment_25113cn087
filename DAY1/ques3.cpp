//program to find factorial of a number4


#include <iostream>
using namespace std;

int main()
 {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    
    for(int i = 1; i <= num; i++)
     {
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " = " << factorial;

    return 0;
}