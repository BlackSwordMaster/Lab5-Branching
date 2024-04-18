// Ian Lin
#include <iostream>
using namespace std;

int main()
{
    bool isRaining;
    int x;

    cout << "Is it raning (1/0)? ";
    cin >> isRaining;

    if (isRaining){
        cout << "1) Watch TV\n2) Do Homework." << endl;
        cout << "Select: ";
        cin >> x;
        if (x == 1){
            cout << "You watch TV." << endl;
        }else if (x == 2){
            cout << "You start Homework." << endl;
        }else{
            cout << "Invalid Option" << endl;
        }
    }else{
        cout << "1)Hit the beach.\n2) Attend a museum opening." << endl;
        cout << "Select: ";
        cin >> x;
        if (x==1){
            cout << "You go to the beach." << endl;
        }else if (x==2){
            cout << "You go to the museum." << endl;
        }else{
           cout << "Invalid Option" << endl;
        }

    }
    return 0;
}