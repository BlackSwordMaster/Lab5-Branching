//Ian Lin
#include <iostream>
using namespace std;

int main()
{
    int x;
    string selection;
    cout << "\n1) Coke\n2) Sprite\n3) Water\n4) Ice tea\n";

    cout << "Select: ";
    cin >> x;

    if (x ==1)
    cout << "\nYou selected an Coke\n" << endl;
    else if (x ==2 )
    cout << "\nYou selected an Sprite\n" << endl;
    else if (x == 3)
    cout << "\nYou selected an Water\n" << endl;
    else if (x == 4)
    cout << "\nYou selected an Ice Water\n" << endl;
    else{
        cout << "INVALID OPTION." << endl;
        return 0;
    }
}