#include <iostream>
using namespace std;

int main() 
{
    int age;

    cout << "Enter your age:";
    cin >> age;

    if (age >= 18) 
    {
        cout << "You are eligible to vote" << endl;
    }
     else if (age >= 0) 
    {
        cout << "You are not eligible to vote" << endl;
    }
     else 
     {
        cout << "Invalid age entered" << endl;
    }

    return 0;
}