#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int fac = 1;

    for (int i = n; i >= 1; i--)
    {
        fac = fac * i;
    }
    cout << fac << endl;

    return 0;
}