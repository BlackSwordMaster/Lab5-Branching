#include <iostream>
using namespace std;

int main() {
    int option;

    cout << "1) Chocolate candy\n";
    cout << "2) Potato chips\n";
    cout << "3) Pretzels\n";
    cout << "4) Gum and Mints\n\n";

    cout << "Select an option: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "You ordered Chocolate candy.\n";
            break;
        case 2:
            cout << "You ordered Potato chips.\n";
            break;
        case 3:
            cout << "You ordered Pretzels.\n";
            break;
        case 4:
            cout << "You ordered Gum and Mints.\n";
            break;
        default:// what happens when none of the case match the value
            cout << "INVALID OPTION. ENDING PROGRAM!\n";
    }

    return 0;
}
