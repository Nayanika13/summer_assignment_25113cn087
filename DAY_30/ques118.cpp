#include <iostream>
#include <string>
using namespace std;

class Library 
{
private:
    int bookid[100];
    string bookname[100];
    string author[100];
    bool issued[100];
    int count;

public:
    Library() 
    {
        count = 0;
    }

    void addbook() 
    {
        cout << "Enter Book ID: ";
        cin >> bookid[count];

        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookname[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        issued[count] = false;

        count++;

        cout << "Book added successfully!\n";
    }

    void displaybooks() 
    {
        if (count == 0) 
        {
            cout << "No books available\n";
            return;
        }

        cout << "\n----- Book List -----\n";
        cout << "ID\tName\t\tAuthor\t\tStatus\n";

        for (int i = 0; i < count; i++) {
            cout << bookid[i] << "\t"
                 << bookname[i] << "\t\t"
                 << author[i] << "\t\t";

            if (issued[i])
                cout << "Issued\n";
            else
                cout << "Available\n";
        }
    }

    void searchBook() 
    {
        int id;
        cout << "Enter Book ID to search: ";
        cin >> id;

        for (int i = 0; i < count; i++) 
        {
            if (bookid[i] == id) 
            {
                cout << "\nBook Found\n";
                cout << "Book ID: " << bookid[i] << endl;
                cout << "Book Name: " << bookname[i] << endl;
                cout << "Author: " << author[i] << endl;
                return;
            }
        }

        cout << "Book not found\n";
    }

    void issueBook() 
    {
        int id;
        cout << "Enter Book ID to issue: ";
        cin >> id;

        for (int i = 0; i < count; i++) 
        {
            if (bookid[i] == id) 
            {

                if (issued[i])
                    cout << "Book already issued\n";
                else {
                    issued[i] = true;
                    cout << "Book issued successfully\n";
                }

                return;
            }
        }

        cout << "Book not found\n";
    }

    void returnBook() 
    {
        int id;
        cout << "Enter Book ID to return: ";
        cin >> id;

        for (int i = 0; i < count; i++) 
        {
            if (bookid[i] == id) 
            {

                if (!issued[i])
                    cout << "Book is already available\n";
                else {
                    issued[i] = false;
                    cout << "Book returned successfully\n";
                }

                return;
            }
        }

        cout << "Book not found\n";
    }
};

int main() 
{

    Library lib;
    int choice;

    do {
        cout << "\n===== Mini Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {

        case 1:
            lib.addbook();
            break;

        case 2:
            lib.displaybooks();
            break;

        case 3:
            lib.searchBook();
            break;

        case 4:
            lib.issueBook();
            break;

        case 5:
            lib.returnBook();
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}