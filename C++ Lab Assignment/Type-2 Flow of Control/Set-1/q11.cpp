#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Enter Marks of Maths==";
    cin >> a;

    cout << "Enter Marks of Physics==";
    cin >> b;

    cout << "Enter Marks of Chemistry==";
    cin >> c;

    cout << "Enter Marks of Computer==";
    cin >> d;

    cout << "Enter Marks of Biology==";
    cin >> e;

    float m, p;

    m = a + b + c + d + e;
    p = (m / 500) * 100;

    if (p >= 60)
    {
        cout << "First Division" << endl;
    }
    else if (p >= 50 && p < 60)
    {
        cout << "Second Division" << endl;
    }
    else if (p >= 40 && p < 50)
    {
        cout << "Third Division" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}