#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        count++;
    }

    cout << "Length=" << count;

    return 0;
}