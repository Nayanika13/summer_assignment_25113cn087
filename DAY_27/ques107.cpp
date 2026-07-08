#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int empid;
    string name;
    float basicsalary, hra, da, deductions, netsalary;

    cout << "========== Basic Salary Management System ==========\n";

    cout << "Enter Employee ID:";
    cin >> empid;
    cin.ignore();

    cout << "Enter Employee Name:";
    getline(cin, name);

    cout << "Enter Basic Salary:";
    cin >> basicsalary;

    cout << "Enter HRA:";
    cin >> hra;

    cout << "Enter DA:";
    cin >> da;

    cout << "Enter Deductions:";
    cin >> deductions;

    netsalary = basicsalary + hra + da - deductions;

    cout << "\n========== Salary Details ==========\n";
    cout << "Employee ID   : " << empid << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicsalary << endl;
    cout << "HRA           : " << hra << endl;
    cout << "DA            : " << da << endl;
    cout << "Deductions    : " << deductions << endl;
    cout << "Net Salary    : " << netsalary << endl;

    return 0;
}