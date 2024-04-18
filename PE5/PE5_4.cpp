#include <iostream>
using namespace std;

int main()
{
    int option;
    string selection;

    cout << endl;
    cout << "1) Chocolate candy\n2) Potato chips\n3) Pretzels\n4) Gum and Mints\n"
    << endl;

    cout << "Select an option: ";
    cin >> option;

    if (option == 1)
       selection = "chocolate candy";
    else if (option == 2)
       selection = "Potato chips";
    else if (option == 3)
       selection = "Pretzels";
    else if (option == 4)
       selection = "Gum and Mints";
    else{
        cout << "INVALID OPTION. ENDING PROGRAM!\n";
        return 0;// this ends the program if we enetered a invalid number
    }

    cout << "You ordered " << selection << "." <<  endl;


    
    return 0;
}
