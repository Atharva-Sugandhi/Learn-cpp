#include <iostream>
using namespace std;

int main()
{

    int P, R, T;
    cout << "Enter Principal=";
    cin >> P;

    cout << "\nEnter Rate=";
    cin >> R;

    cout << "\nEnter Time=";
    cin >> T;

    int I;
    I = P * R * T / 100;

    cout << "\nIntrest is=" << I;

    return 0;
}