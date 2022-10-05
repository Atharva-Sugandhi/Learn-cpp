#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            if (i <= (n + 1) / 2)
            {
                cout << i;
            }

            else
            {
                cout << n - i + 1;
            }
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}