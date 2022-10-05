#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i;

    cout << "1 ";

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    if (n == i)
    {
        cout << n;
    }

    return 0;
}