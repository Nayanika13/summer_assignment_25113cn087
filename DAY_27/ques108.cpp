#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rollno;
    string name;
    float eng, maths, science, hindi, computer;
    float total, percentage;

    cout << "========== Marksheet Generation System ==========\n";

    cout << "Enter Roll Number:";
    cin >> rollno;
    cin.ignore();

    cout << "Enter Student Name:";
    getline(cin, name);

    cout << "Enter Marks in English:";
    cin >> eng;

    cout << "Enter Marks in Mathematics:";
    cin >> maths;

    cout << "Enter Marks in Science:";
    cin >> science;

    cout << "Enter Marks in Hindi:";
    cin >> hindi;

    cout << "Enter Marks in Computer:";
    cin >> computer;

    total = eng + maths + science + hindi + computer;
    percentage = total / 5;

    cout << "\n========== STUDENT MARKSHEET ==========\n";
    cout << "Roll Number : " << rollno << endl;
    cout << "Name        : " << name << endl;
    cout << "---------------------------------------\n";
    cout << "English     : " << eng << endl;
    cout << "Mathematics : " << maths << endl;
    cout << "Science     : " << science << endl;
    cout << "Hindi       : " << hindi << endl;
    cout << "Computer    : " << computer << endl;
    cout << "---------------------------------------\n";
    cout << "Total Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    if (percentage >= 90)
        cout << "Grade       : A+" << endl;
    else if (percentage >= 80)
        cout << "Grade       : A" << endl;
    else if (percentage >= 70)
        cout << "Grade       : B" << endl;
    else if (percentage >= 60)
        cout << "Grade       : C" << endl;
    else if (percentage >= 50)
        cout << "Grade       : D" << endl;
    else
        cout << "Grade       : F" << endl;
    if (eng >= 33 && maths >= 33 && science >= 33 &&
        hindi >= 33 && computer >= 33)
        cout << "Result      : PASS" << endl;
    else
        cout << "Result      : FAIL" << endl;

    return 0;
}