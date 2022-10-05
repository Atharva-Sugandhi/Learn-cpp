#include <iostream>
using namespace std;

int main()
{

    int n, d1, d2, d3;

    for (int i = 1; i <= 500; i++)
    {
        d1 = i / 100;
        d2 = i / 10 - d1 * 10;
        d3 = i % 10;

        if (d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3 == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}