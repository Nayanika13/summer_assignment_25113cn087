#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i, key;
    bool created = false;

    do {
        cout << "\n===== Menu Driven Array Operations =====\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Find Largest Element\n";
        cout << "5. Find Smallest Element\n";
        cout << "6. Find Sum of Elements\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter the number of elements: ";
            cin >> n;

            cout << "Enter " << n << " elements:\n";
            for (i = 0; i < n; i++) {
                cin >> arr[i];
            }
            created = true;
            cout << "Array created successfully!\n";
            break;

        case 2:
            if (!created) {
                cout << "Please create the array first.\n";
                break;
            }

            cout << "Array Elements: ";
            for (i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            if (!created) {
                cout << "Please create the array first.\n";
                break;
            }

            cout << "Enter element to search: ";
            cin >> key;

            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at position " << i + 1 << endl;
                    break;
                }
            }

            if (i == n)
                cout << "Element not found.\n";
            break;

        case 4:
           { if (!created)
             {
                cout << "Please create the array first.\n";
                break;
            }

            int largest;
            largest = arr[0];

            for (i = 1; i < n; i++) {
                if (arr[i] > largest)
                    largest = arr[i];
            }

            cout << "Largest element = " << largest << endl;
            break;}

        case 5:
           { if (!created) 
            {
                cout << "Please create the array first\n";
                break;
            }

            int smallest;
            smallest = arr[0];

            for (i = 1; i < n; i++) 
            {
                if (arr[i] < smallest)
                    smallest = arr[i];
            }

            cout << "Smallest element = " << smallest << endl;
            break;
            }

        case 6:
            {if (!created) 
                {
                cout << "Please create the array first\n";
                break;
            }

            int sum = 0;
            for (i = 0; i < n; i++)
             {
                sum += arr[i];
            }

            cout << "Sum of elements = " << sum << endl;
            break;
            } 
        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}