#include <iostream>
using namespace std;

int main()
{
    double x;
    int n;
    int numFactors = 0;
do{
    cout << "Enter an integer between 1 and 100: ";
    cin >> x;

n = static_cast<int>(x);
if(n == x && x>=1 && x<=101){
    break;
}
    cout << "Invalid" << endl;

}while(true);

cout << "Factors of " << x << ":\n";
for(int i =1; i<=n; i++){
    if(n%i==0){
        cout << i << " ";
        numFactors++;
    }

}

cout << endl << endl;
if(numFactors<3)
    cout << x << " is prime.\n";




    return 0;
}