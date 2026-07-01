#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev = "";

    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    // Check if original and reversed strings are the same
    if (str == rev) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}