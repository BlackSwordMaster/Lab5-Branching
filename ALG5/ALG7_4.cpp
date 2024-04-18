#include <iostream>
using namespace std;

int main(){
    int x, y;

    cout << "Enter two integers, x and y, seperate by a space: ";
    cin >> x >> y;

    if(x%y ==0){
        cout << y << " is a factor of " << x << endl;
    }else{
        cout << y << " is not a factor of " << x << endl;
    }
    return 0;
}