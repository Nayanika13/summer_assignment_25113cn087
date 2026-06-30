#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    cout <<"Enter a string:";
    cin >> str;

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) 
    {
        freq[str[i]]++;
    }
    int maxfreq = 0;
    char maxchar;

    for (int i = 0; i < str.length(); i++) 
    {
        if (freq[str[i]] > maxfreq) 
        {
            maxfreq = freq[str[i]];
            maxchar = str[i];
        }
    }

    cout <<"Maximum occurring character:" << maxchar << endl;
    cout <<"Frequency:" << maxfreq << endl;

    return 0;
}