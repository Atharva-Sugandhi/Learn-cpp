#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter Co-efficients of Quadratic equation in form ax^2 + bx + c = 0 _____";
    cin >> a >> b >> c;

    float D, x1, x2;

    D = (b * b) - (4 * a * c);

    if (D < 0)
    {
        cout << "\nNo Real Solutions\n";
    }
    else
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
    }

    cout << "\nRoots of Quadratic ==" << x1 << " " << x2 << endl;

    return 0;
}