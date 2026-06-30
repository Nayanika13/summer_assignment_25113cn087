#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1, str2;

    cout <<"Enter first string:";
    cin >> str1;

    cout <<"Enter second string:";
    cin >> str2;

    if (str1.length() != str2.length()) 
    {
        cout <<"Not Anagrams";
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; i < str1.length(); i++) 
    {
        freq[str1[i]]++;
    }

    for (int i = 0; i < str2.length(); i++) 
    {
        freq[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] != 0) 
        {
            cout <<"Not Anagrams";
            return 0;
        }
    }

    cout <<"Anagrams";

    return 0;
}