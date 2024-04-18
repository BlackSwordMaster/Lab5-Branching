// Ian Lin
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    bool multipleof5 = (x%5 == 0);
    bool multiplepof3 = (x%3 ==0);

    if (multipleof5 && multiplepof3)
    cout << x << " is a multiple of 5.\n" << x << " is a multiple of 3." <<  endl;
    else if (multipleof5)
    cout << x << " is a multiple of 5.\n" << endl;
    else if (multiplepof3)
    cout << x << " is a multiple of 3." << endl;
    else
    cout << x << " is neither a multiple of 5 nor 3." << endl;

    return 0;
}

