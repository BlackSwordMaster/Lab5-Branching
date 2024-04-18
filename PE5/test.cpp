#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a 3-digit (non-zero) integer: ";
    cin >> number;

    int digit1 = number % 10;           // Extract the first digit
    int digit2 = (number / 10) % 10;     // Extract the second digit
    int digit3 = number / 100;            // Extract the third digit

    cout << "Is " << digit1 << " a factor of " << number << "? " << (number % digit1 == 0) << endl;
    cout << "Is " << digit2 << " a factor of " << number << "? " << (number % digit2 == 0) << endl;
    cout << "Is " << digit3 << " a factor of " << number << "? " << (number % digit3 == 0) << endl;

    return 0;
}
