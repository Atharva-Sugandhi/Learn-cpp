#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float CI, P, R, T;

    cout << "Enter a Principal=";
    cin >> P;

    cout << "Enter a Rate=";
    cin >> R;

    cout << "Enter a Time=";
    cin >> T;

    CI = P * pow((1 + R / 100), T) - P;

    cout << "Compound Intrest=" << CI;

    return 0;
}