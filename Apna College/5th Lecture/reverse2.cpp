#include <iostream>
using namespace std;

int main()
{

    int n, r, sum = 0;
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum * 10 + r;
    }
    cout << sum << endl;
    return 0;
}