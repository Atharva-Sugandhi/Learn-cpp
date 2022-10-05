#include <iostream>
using namespace std;

int main()
{

    int n, r, sum = 0;
    cin >> n;
    int k = n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (sum == k)
    {
        cout << "Armstrong Number\n";
    }
    else
    {
        cout << "Not an Armstrong Number\n";
    }

    return 0;
}