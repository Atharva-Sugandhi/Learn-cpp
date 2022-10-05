#include <iostream>
using namespace std;

void primes(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << " ";
        }
    }
    return;
}

int main()
{

    int a, b;
    cout << "Enter 2 Numbers==";
    cin >> a >> b;

    primes(a, b);

    return 0;
}