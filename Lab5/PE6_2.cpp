#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double grade;

do{
    cout << "input grade(60-100): ";
    cin >> grade;

    if(grade>=60 and grade<=100)
       break;
    else
    cout << "Invalid" << endl;
}while(true);
cout.setf(ios::showpoint);
cout.setf(ios::fixed);
cout.precision(1);
cout << (grade-60) << endl;

    
}


