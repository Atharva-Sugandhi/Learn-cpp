#include <iostream>
using namespace std;

int main()
{

    int D, Y, M;

    cout << "Enter no. of Days= \t";
    cin >> D;

    Y = D / 365;
    D = D % 365;

    M = D / 12;
    D = D % 12;

    cout << "No. of Years= \t" << Y << "\nNo. of Months= \t" << M << "\nNo. of Days= \t" << D << endl;

    return 0;
}