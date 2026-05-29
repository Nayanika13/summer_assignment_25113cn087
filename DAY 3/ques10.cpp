//program toprint prime numbers in a range

#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int n = start; n <= end; n++) {
        bool isPrime = true;

        if (n <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << n << " ";
        }
    }

    return 0;
}