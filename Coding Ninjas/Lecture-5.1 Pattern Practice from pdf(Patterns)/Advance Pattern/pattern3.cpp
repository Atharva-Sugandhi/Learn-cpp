#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= 2 * i - 1)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << n - i + 1;
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        i--;
        cout << endl;
    }

    i = 1;
    int n1 = n - 1;
    while (i <= n1)
    {
        int space = 1;
        while (space <= n1 - i)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= 2 * i + 1)
        {
            if (j == 1 || j == 2 * i + 1)
            {
                cout << n1 - i + 1;
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}