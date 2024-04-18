#include <iostream>
using namespace std;

int main() {
    int integer;
    do {
        cout << "Enter an integer between 1 and 100: ";
        cin >> integer;

        if (integer >= 1 && integer <= 100)
            break;
        else
            cout << "Invalid input. Please enter a number between 1 and 100." << endl;

    } while (true);

    // Display all factors of the integer
    cout << "Factors of " << integer << " are: ";
    for (int i = 1; i <= integer; ++i) {
        if (integer % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Check if the number is prime
    bool isPrime = true;
    for (int i = 2; i <= integer / 2; ++i) {
        if (integer % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime && integer > 1) {
        cout << integer << " is a prime number." << endl;
    } else {
        cout << integer << " is not a prime number." << endl;
    }

    return 0;
}
