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
        while (j <= 2 * i - 1)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << i;
            }
            j++;
        }
        i++;
        cout << endl;
    }

    i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= 2 * i - 1)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << i;
            }
            j++;
        }
        i--;
        cout << endl;
    }

    return 0;
}