#include <iostream>
using namespace std;

int main()
{
double num1, num2;

do{
    cout << "Input two integers <separate by space>: ";
    cin >> num1 >> num2;

    if(num1 == static_cast<int>(num1) && num2 == static_cast<int>(num2))
       if(num2 == 0)
       cout << "cannot be zero re=enter" << endl;
       else
       break;

    else
    cout << "Input must be integer. Please re-rnter" << endl;



}while (true);
cout << int(num1/num2) << endl;
cout << static_cast<int>(num1)%static_cast<int>(num2) << endl;
cout.setf(ios::fixed);
cout.precision(2);
cout << num1/num2 << endl;




   
   


    
}