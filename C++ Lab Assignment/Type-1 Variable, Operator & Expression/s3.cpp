#include <iostream>
using namespace std;

int main()
{

    int i, f;
    cout << "Enter Inch and Feet= ";
    cin >> i >> f;

    double c;
    int d;
    c = 2.54;
    d = 12;

    double e;
    e = i * c + f * d;

    cout << "Length in Centimeters= " << e << endl;

    return 0;
}