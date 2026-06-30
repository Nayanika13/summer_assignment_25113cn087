#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    cout <<"Enter a string:";
    cin >> str;

    int array[256] = {0};

    
    for (int i = 0; i < str.length(); i++) 
    {
        if (array[str[i]] == 1) {
            cout <<"First repeating character:" << str[i] << endl;
            return 0;
        }
        array[str[i]] = 1;
    }

    cout <<"No repeating character found" << endl;

    return 0;
}