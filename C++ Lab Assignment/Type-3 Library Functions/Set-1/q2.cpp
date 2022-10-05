#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, s;
    cin >> a >> b >> c;

    s = (a + b + c) / 2;

    float Area;

    Area = s * (s - a) * (s - b) * (s - c);

    cout << "Area is:" << Area;

    return 0;
}