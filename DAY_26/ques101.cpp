#include <iostream>   
#include <cstdlib>    
#include <ctime>     

using namespace std;

int main() 
{
    srand(time(0));               

    int secret = rand() % 100 + 1; 
    int guess;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess:";
        cin >> guess;

        if (guess > secret)
            cout << "Too High! Try Again.\n";
        else if (guess < secret)
            cout << "Too Low! Try Again.\n";
        else
            cout << "Congratulations! You guessed the correct number.\n";
    } 
    while (guess != secret);

    return 0;
}