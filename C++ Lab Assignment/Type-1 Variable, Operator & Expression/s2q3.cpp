#include <iostream>
using namespace std;

int main()
{

    int X, R500, R100, R50, R20, R10, R5, R1;
    cout << "Enter An Amount= ";
    cin >> X;

    R500 = X / 500;
    X = X % 500;

    R100 = X / 100;
    X = X % 100;

    R50 = X / 50;
    X = X % 50;

    R20 = X / 20;
    X = X % 20;

    R10 = X / 10;
    X = X % 10;

    R5 = X / 5;
    X = X % 5;

    R1 = X / 1;
    X = X % 1;

    cout << "R500= " << R500 << "\nR100= " << R100 << "\nR50= " << R50 << "\nR20= " << R20 << "\nR10= " << R10 << "\nR5= " << R5 << "\nR1= " << R1 << endl;

    return 0;
}