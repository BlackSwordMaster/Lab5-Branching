// Ian Lin
#include <iostream>
using namespace std;

int main()
{
    int option;

    cout << "\n1) Coke\n2) Sprite\n3) Water\n4) Ice tea\n";

    cout << "Select: ";
    cin >> option;

    switch(option){
        case 1:
        cout << "\nYou selected an Coke." << endl;
        break;
        case 2:
        cout << "\nYou selected an Sprite." << endl;
        break;
        case 3:
        cout << "\nYou selected an Water." << endl;
        break;
        case 4:
        cout << "\nYou selected an Ice tea." << endl;
        break;
        default:
        cout << "\nINVALID OPTION" << endl;

    }

    return 0;
}