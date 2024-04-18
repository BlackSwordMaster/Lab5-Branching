#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double input;
    int x;

    cout << "Input an integer between 1 and 100 inclusive: ";
    cin >> input;

    x = static_cast<int>(input);
//if comvert the decimal to a int then check if the new int is equal to our input
    if (input != x) {
        cout << input << " is not an integer." << endl;
    } else if (x < 1 || x > 100) {
        cout << x << " is not between 1 and 100 inclusive." << endl;
    } else {
        cout << x << " is an integer between 1 and 100 inclusive." << endl;
    }

    return 0;
}
