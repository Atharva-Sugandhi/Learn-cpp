#include <iostream>
using namespace std;

int main()
{

    float x;
    int n;

    cout << "Enter the value of x:";
    cin >> x;
    cout << "Enter the value of n:";
    cin >> n;

    float sum = 0;
    int sign = -1;
    int p, fact;

    for (int i = 1; i <= n; i += 2)
    {
        p = 1;
        fact = 1;

        for (int j = 1; j <= i; j++)
        {
            p = p * x;
            fact = fact * j;
        }
        sign = -1 * sign;
        sum = sum + sign * p / fact;
    }

    cout << "sin" << x << "=" << sum;

    return 0;
}