#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int k = n;
        while (j <= n)
        {
            if (j <= i)
            {
                cout << k << " ";
                k--;
            }
            else
            {
                cout << n - i + 1 << " ";
            }
            j++;
        }

        j = n;
        k = n;
        while (j >= 1)
        {
            if (j <= i)
            {
                cout << k << " ";
                k--;
            }
            else
            {
                cout << n - i + 1 << " ";
            }
            j--;
        }
        cout << endl;
        i++;
    }

    i = n;
    while (i >= 1)
    {
        int j = 1;
        int k = n;
        while (j <= n)
        {
            if (j <= i)
            {
                cout << k << " ";
                k--;
            }

            else
            {
                cout << n - i + 1 << " ";
            }
            j++;
        }

        j = n;
        k = n;
        while (j >= 1)
        {
            if (j <= i)
            {
                cout << k << " ";
                k--;
            }
            else
            {
                cout << n - i + 1 << " ";
            }
            j--;
        }
        cout << endl;
        i--;
    }

    return 0;
}