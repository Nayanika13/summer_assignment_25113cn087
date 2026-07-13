#include <iostream>
#include <string>
using namespace std;

class Contact 
{
public:
    string name;
    string phone;
};

class Contactmanager 
{
private:
    Contact contacts[100];
    int count;

public:
    Contactmanager() 
    {
        count = 0;
    }

    void addcontact() 
    {
        if (count >= 100) 
        {
            cout << "Contact list is full\n";
            return;
        }

        cout << "Enter Name:";
        cin.ignore();
        getline(cin, contacts[count].name);

        cout << "Enter Phone Number:";
        getline(cin, contacts[count].phone);

        count++;
        cout << "Contact added successfully!\n";
    }

    void viewcontacts() 
    {
        if (count == 0)
        {
            cout << "No contacts available\n";
            return;
        }

        cout << "\n----- Contact List -----\n";
        for (int i = 0; i < count; i++) 
        {
            cout << i + 1 << ". Name : " << contacts[i].name << endl;
            cout << "   Phone: " << contacts[i].phone << endl;
        }
    }

    void searchcontact() 
    {
        if (count == 0) 
        {
            cout << "No contacts available.\n";
            return;
        }

        string searchname;
        cout << "Enter name to search: ";
        cin.ignore();
        getline(cin, searchname);

        bool found = false;

        for (int i = 0; i < count; i++)
         {
            if (contacts[i].name == searchname) 
            {
                cout << "\nContact Found!\n";
                cout << "Name : " << contacts[i].name << endl;
                cout << "Phone: " << contacts[i].phone << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Contact not found\n";
    }

    void deletecontact() 
    {
        if (count == 0) 
        {
            cout << "No contacts available\n";
            return;
        }

        string deletename;
        cout << "Enter name to delete:";
        cin.ignore();
        getline(cin, deletename);

        bool found = false;

        for (int i = 0; i < count; i++) 
        {
            if (contacts[i].name == deletename) 
            {
                for (int j = i; j < count - 1; j++) 
                {
                    contacts[j] = contacts[j + 1];
                }
                count--;
                cout << "Contact deleted successfully\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Contact not found\n";
    }
};

int main() 
{
    Contactmanager cm;
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cm.addcontact();
                break;
            case 2:
                cm.viewcontacts();
                break;
            case 3:
                cm.searchcontact();
                break;
            case 4:
                cm.deletecontact();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again\n";
        }

    } 
    while (choice != 5);

    return 0;
}