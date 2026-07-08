#include <iostream>
#include <string>
using namespace std;

struct Employee 
{
    int empid;
    string name;
    string department;
    float salary;
};

Employee emp[100];
int count = 0;

void addEmployee() 
{
    cout << "\nEnter Employee ID:";
    cin >> emp[count].empid;
    cin.ignore();

    cout << "Enter Employee Name:";
    getline(cin, emp[count].name);

    cout << "Enter Department:";
    getline(cin, emp[count].department);

    cout << "Enter Salary:";
    cin >> emp[count].salary;

    count++;
    cout << "\nEmployee record added successfully!\n";
}

void displayEmployees() 
{
    if (count == 0) {
        cout << "\nNo employee records found!\n";
        return;
    }

    cout << "\n========== Employee Records ==========\n";
    cout << "ID\tName\t\tDepartment\tSalary\n";
    cout << "---------------------------------------------------------\n";

    for (int i = 0; i < count; i++) 
    {
        cout << emp[i].empid << "\t"
             << emp[i].name << "\t\t"
             << emp[i].department << "\t\t"
             << emp[i].salary << endl;
    }
}

void searchEmployee() {
    int id;
    cout << "\nEnter Employee ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) 
    {
        if (emp[i].empid == id) {
            cout << "\nEmployee Found!\n";
            cout << "Employee ID : " << emp[i].empid << endl;
            cout << "Name        : " << emp[i].name << endl;
            cout << "Department  : " << emp[i].department << endl;
            cout << "Salary      : " << emp[i].salary << endl;
            return;
        }
    }

    cout << "\nEmployee record not found!\n";
}

void updateEmployee() {
    int id;
    cout << "\nEnter Employee ID to update: ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < count; i++) 
    {
        if (emp[i].empid == id) 
        {
            cout << "Enter New Name:";
            getline(cin, emp[i].name);

            cout << "Enter New Department:";
            getline(cin, emp[i].department);

            cout << "Enter New Salary:";
            cin >> emp[i].salary;

            cout << "\nEmployee record updated successfully!\n";
            return;
        }
    }

    cout << "\nEmployee record not found!\n";
}

void deleteEmployee() {
    int id;
    cout << "\nEnter Employee ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (emp[i].empid == id) {
            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            cout << "\nEmployee record deleted successfully!\n";
            return;
        }
    }

    cout << "\nEmployee record not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== Employee Record Management System ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                cout << "\nExiting program...\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}