#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int words = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << "Number of words: " << words << endl;

    return 0;
}