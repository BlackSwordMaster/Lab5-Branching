// Ian Lin
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter an integer x that is greater than 0: ";
    cin >> x;

    if (x<=0)
    cout << "X is not a valid number." << endl;
    else if (18%x==0)
    cout << x << " is a factor of 18." << endl;
    else
    cout << x << " is not a factor of 18." << endl;

   
    return 0;
}