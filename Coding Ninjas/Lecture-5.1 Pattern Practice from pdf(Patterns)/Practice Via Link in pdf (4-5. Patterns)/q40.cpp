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
        int k = n - i + 1;
        while (j <= i)
        {
            cout << k;
            j++;
            k++;
        }

        j = 1;
        k = n - i;
        while (j <= n - i)
        {
            cout << k;
            k--;
            j++;
        }
        i--;
        cout << endl;
    }

    return 0;
}