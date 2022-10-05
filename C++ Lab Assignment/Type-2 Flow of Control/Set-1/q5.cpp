#include <iostream>
using namespace std;

int main()
{

    int R, S, A;
    cout << "Enter Age Of Ram, Sulabh and Ajay respectively==";
    cin >> R >> S >> A;

    (R < S && R < A) ? cout << "Ram is Youngest\n" : (S < A) ? cout << "Sulabh is Youngest\n"
                                                             : cout << "Ajay is Youngest\n";

    return 0;
}