#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int k = 1, m = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << "  ";
            space++;
        }
        int j = 1;
        while (j <= 2 * i - 1)
        {
            cout << k << " ";
            k = k + 2 * m + 1;
            m++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}