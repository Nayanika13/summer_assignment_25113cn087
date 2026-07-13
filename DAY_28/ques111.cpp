#include <iostream>
using namespace std;

class Ticketbooking 
{
private:
    bool seats[10];

public:
    Ticketbooking() 
    {
        for (int i = 0; i < 10; i++)
            seats[i] = false;
    }

    void showseats() 
    {
        cout << "\nSeat Status:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Seat " << i + 1 << ": ";
            if (seats[i])
                cout << "Booked\n";
            else
                cout << "Available\n";
        }
    }

    void bookseat() 
    {
        int seat;
        cout << "Enter seat number (1-10): ";
        cin >> seat;

        if (seat < 1 || seat > 10) {
            cout << "Invalid seat number!\n";
        } else if (seats[seat - 1]) {
            cout << "Seat already booked!\n";
        } else {
            seats[seat - 1] = true;
            cout << "Seat " << seat << " booked successfully!\n";
        }
    }

    void cancelseat() 
    {
        int seat;
        cout << "Enter seat number to cancel (1-10): ";
        cin >> seat;

        if (seat < 1 || seat > 10) {
            cout << "Invalid seat number!\n";
        } else if (!seats[seat - 1]) {
            cout << "Seat is not booked!\n";
        } else {
            seats[seat - 1] = false;
            cout << "Booking cancelled for seat " << seat << "\n";
        }
    }
};

int main() 
{
    Ticketbooking tb;
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. View Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                tb.showseats();
                break;
            case 2:
                tb.bookseat();
                break;
            case 3:
                tb.cancelseat();
                break;
            case 4:
                cout << "Thank you for using the system\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}