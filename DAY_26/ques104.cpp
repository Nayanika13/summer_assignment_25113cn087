#include <iostream>
using namespace std;

int main() 
{
    int score = 0;
    char answer;

    cout << "Q1. Which element has highest melting point?\n";
    cout << "a) gold\nb) tungsten\nc) silver\nd) mercury\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B')
        score++;

    cout << "\nQ2. Which is the only continent through which all four hemisphere pass?\n";
    cout << "a) asia\nb) antartica\nc) africa\nd) australia\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    cout << "\nQ3. what is the name of the deepest known points in earths ocean?\n";
    cout << "a)java trench \nb)rico trench \nc)challenger deep \nd)tonga trench \n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    
    cout << "\n===== Quiz Result =====" << endl;
    cout << "Your Score: " << score << " out of 3" << endl;

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}