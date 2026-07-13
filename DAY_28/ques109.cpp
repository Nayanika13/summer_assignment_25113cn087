#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book books[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
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
            cout << "Enter Book ID: ";
            cin >> books[count].id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            cout << "Enter Author Name: ";
            getline(cin, books[count].author);

            books[count].issued = false;
            count++;

            cout << "Book added successfully!\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "No books available.\n";
            }
            else
            {
                cout << "\nBooks in Library:\n";
                for (int i = 0; i < count; i++)
                {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "ID: " << books[i].id << endl;
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    cout << "Status: ";
                    if (books[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (books[i].id == id)
                {
                    cout << "Book Found!\n";
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Book ID to issue: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (books[i].id == id)
                {
                    if (!books[i].issued)
                    {
                        books[i].issued = true;
                        cout << "Book issued successfully.\n";
                    }
                    else
                    {
                        cout << "Book is already issued.\n";
                    }
                    break;
                }
            }
            break;
        }

        case 5:
        {
            int id;
            cout << "Enter Book ID to return: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (books[i].id == id)
                {
                    if (books[i].issued)
                    {
                        books[i].issued = false;
                        cout << "Book returned successfully.\n";
                    }
                    else
                    {
                        cout << "Book was not issued.\n";
                    }
                    break;
                }
            }
            break;
        }

        case 6:
            cout << "Thank you!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}