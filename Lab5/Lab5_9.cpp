// Ian Lin
#include <iostream>
using namespace std;

int main()
{
    bool goMovies, goDinner;

    cout << "Do you wish to go to the movies (1/0)? ";
    cin >> goMovies;

    cout << "Do you wish to go to Dinner (1/0)? ";
    cin >> goDinner;

    if (goMovies && goDinner)
    cout << "You cannot do both." << endl;
    else if (goMovies)
    cout << "You are going to the movies" << endl;
    else if (goDinner)
    cout << "You are going to dinner." << endl;
    else
    cout << "You didnt select a option please select one." << endl;
    
    return 0;
}
