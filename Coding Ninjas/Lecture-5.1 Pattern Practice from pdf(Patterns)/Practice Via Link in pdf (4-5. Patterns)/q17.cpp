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
        int k = 2, l = 1;
        while (j <= i)
        {
            if (i % 2 == 0)
            {
                cout << k;
                k = k + 2;
            }
            else
            {
                cout << l;
                l = l + 2;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}