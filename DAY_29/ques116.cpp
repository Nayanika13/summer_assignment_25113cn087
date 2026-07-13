#include <iostream>
#include <string>
using namespace std;

class Inventory 
{
private:
    int id[100];
    string name[100];
    int quantity[100];
    float price[100];
    int count;

public:
    Inventory() 
    {
        count = 0;
    }

    void addproduct() 
    {
        if (count >= 100) 
        {
            cout << "Inventory is full!\n";
            return;
        }

        cout << "Enter Product ID: ";
        cin >> id[count];

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name[count]);

        cout << "Enter Quantity: ";
        cin >> quantity[count];

        cout << "Enter Price: ";
        cin >> price[count];

        count++;
        cout << "Product added successfully!\n";
    }

    void viewproducts() 
    {
        if (count == 0) 
        {
            cout << "No products available\n";
            return;
        }

        cout << "\n------ Inventory ------\n";
        cout << "ID\tName\t\tQuantity\tPrice\n";

        for (int i = 0; i < count; i++) 
        {
            cout << id[i] << "\t"
                 << name[i] << "\t\t"
                 << quantity[i] << "\t\t"
                 << price[i] << endl;
        }
    }

    void searchproduct() 
    {
        int searchid;
        cout << "Enter Product ID to search: ";
        cin >> searchid;

        for (int i = 0; i < count; i++) 
        {
            if (id[i] == searchid) 
            {
                cout << "\nProduct Found\n";
                cout << "ID: " << id[i] << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Quantity: " << quantity[i] << endl;
                cout << "Price: " << price[i] << endl;
                return;
            }
        }

        cout << "Product not found.\n";
    }

    void updatequantity() 
    {
        int searchid;
        cout << "Enter Product ID: ";
        cin >> searchid;

        for (int i = 0; i < count; i++) 
        {
            if (id[i] == searchid) 
            {
                cout << "Enter New Quantity: ";
                cin >> quantity[i];
                cout << "Quantity updated successfully\n";
                return;
            }
        }

        cout << "Product not found.\n";
    }

    void deleteproduct() 
    {
        int searchid;
        cout << "Enter Product ID to delete: ";
        cin >> searchid;

        for (int i = 0; i < count; i++) 
        {
            if (id[i] == searchid) 
            {

                for (int j = i; j < count - 1; j++) 
                {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    quantity[j] = quantity[j + 1];
                    price[j] = price[j + 1];
                }

                count--;
                cout << "Product deleted successfully\n";
                return;
            }
        }

        cout << "Product not found\n";
    }
};

int main() 
{
    Inventory inv;
    int choice;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. View Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inv.addproduct();
                break;

            case 2:
                inv.viewproducts();
                break;

            case 3:
                inv.searchproduct();
                break;

            case 4:
                inv.updatequantity();
                break;

            case 5:
                inv.deleteproduct();
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