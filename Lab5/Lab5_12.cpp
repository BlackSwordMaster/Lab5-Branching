// Ian Lin
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Input an integer: ";
    cin >> x;


if (x>50 || x<0){
    cout << x << " is valid." << endl;
}else {
    cout << x << " is not valid." << endl;
}
    return 0;
}