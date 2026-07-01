#include <iostream>
#include <string>
using namespace std;

string compress(string str) 
{
    string result = "";
    int n = str.length();

    for (int i = 0; i < n; i++) 
    {
        int count = 1;

        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        result += str[i];          
        result += char(count + '0');
    }

    return result;
}

int main() {
    string str;

    cout <<"Enter a string:";
    cin >> str;

    cout <<"Compressed string:" << compress(str);

    return 0;
}