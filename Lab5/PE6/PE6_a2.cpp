#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 21) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;

    for (int i=0; i<21; i+=2)
       cout << i << " ";
    cout << endl;
    return 0;
}
