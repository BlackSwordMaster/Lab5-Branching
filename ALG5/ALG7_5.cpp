#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char c;
    int x;
    cout << "Enter a character: ";
    cin >> c;

    if(isupper(c)){
        cout << c << " is an uppcase letter." << endl;
    }else if(islower(c)){
        cout << c << " is a lowercase letter." << endl;
    }else if(c == x){
        cout << c << " is a number." << endl;
    }else{
        cout << c << " is nethier a number nor a letter." << endl;
    }
    return 0;
}