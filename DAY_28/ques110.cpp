#include <iostream>
#include <string>
using namespace std;

class Bankaccount
{
private:
    int accno;
    string name;
    float balance;

public:
    void createaccount()
    {
        cout <<"Enter Account Number:";
        cin >> accno;
        cin.ignore();

        cout <<"Enter Account Holder Name:";
        getline(cin, name);

        cout << "Enter Initial Balance:";
        cin >> balance;

        cout << "Account Created Successfully!\n";
    }

    void deposit()
    {
        float amount;
        cout <<"Enter Amount to Deposit:";
        cin >> amount;

        balance += amount;
        cout <<"Amount Deposited Successfully\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void display()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accno << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance         : " << balance << endl;
    }
};

int main()
{
    Bankaccount account;
    int choice;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.createaccount();
            break;

        case 2:
            account.deposit();
            break;

        case 3:
            account.withdraw();
            break;

        case 4:
            account.display();
            break;

        case 5:
            cout <<"Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}