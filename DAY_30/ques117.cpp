#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int roll[100], marks[100];
    string name[100];
    int count = 0, choice;

    do 
    {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {

        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll[count];

            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name[count]);

            cout << "Enter Marks: ";
            cin >> marks[count];

            count++;
            cout << "Student record added successfully!\n";
            break;

        case 2:
            if (count == 0) 
            {
                cout << "No records found\n";
                break;
            }

            cout << "\nRoll\tName\t\tMarks\n";
            for (int i = 0; i < count; i++) {
                cout << roll[i] << "\t"
                     << name[i] << "\t\t"
                     << marks[i] << endl;
            }
            break;

        case 3:
        {
            if (count == 0) 
            {
                cout << "No records found\n";
                break;
            }

            int searchRoll;
            cout << "Enter Roll Number to search: ";
            cin >> searchRoll;

            bool found = false;

            for (int i = 0; i < count; i++) 
            {
                if (roll[i] == searchRoll) 
                {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number: " << roll[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
            break;
        }

        case 4:
        {
            if (count == 0) 
            {
                cout << "No records found.\n";
                break;
            }

            int updateroll;
            cout << "Enter Roll Number: ";
            cin >> updateroll;

            bool found = false;

            for (int i = 0; i < count; i++) 
            {
                if (roll[i] == updateroll) 
                {
                    cout << "Enter New Marks: ";
                    cin >> marks[i];
                    cout << "Marks updated successfully\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
            break;
        }

        case 5:
        {
            if (count == 0) 
            {
                cout << "No records found.\n";
                break;
            }

            int deleteroll;
            cout << "Enter Roll Number to delete: ";
            cin >> deleteroll;

            bool found = false;

            for (int i = 0; i < count; i++) 
            {
                if (roll[i] == deleteroll) 
                {

                    for (int j = i; j < count - 1; j++) 
                    {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    count--;
                    cout << "Student record deleted successfully\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found\n";
            break;
        }

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}