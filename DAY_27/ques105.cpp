#include <iostream>
#include <string>
using namespace std;

struct Student 
{
    int rollNo;
    string name;
    float marks;
};

Student s[100];
int count = 0;
void addStudent()
 {
    cout << "\nEnter Roll Number:";
    cin >> s[count].rollNo;
    cin.ignore();

    cout << "Enter Name:";
    getline(cin, s[count].name);

    cout << "Enter Marks:";
    cin >> s[count].marks;

    count++;
    cout << "Student Record Added Successfully!\n";
}

void displayStudents() 
{
    if (count == 0) 
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\nStudent Records:\n";
    cout << "-----------------------------------\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "-----------------------------------\n";

    for (int i = 0; i < count; i++) 
    {
        cout << s[i].rollNo << "\t" << s[i].name << "\t\t" << s[i].marks << endl;
    }
}

void searchStudent() 
{
    int roll;
    cout << "\nEnter Roll Number to Search:";
    cin >> roll;

    for (int i = 0; i < count; i++) {
        if (s[i].rollNo == roll) {
            cout << "\nRecord Found:\n";
            cout << "Roll No: " << s[i].rollNo << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "Record Not Found!\n";
}

void deleteStudent() 
{
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < count; i++) {
        if (s[i].rollNo == roll) {
            for (int j = i; j < count - 1; j++) 
            {
                s[j] = s[j + 1];
            }
            count--;
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Record Not Found!\n";
}

int main() 
{
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice:";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice! Try Again\n";
        }

    } 
    while (choice != 5);

    return 0;
}