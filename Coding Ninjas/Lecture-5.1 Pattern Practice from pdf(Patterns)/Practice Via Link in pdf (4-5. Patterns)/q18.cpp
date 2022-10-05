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
        int k = n - i + 1;
        while (j <= n)
        {
            if (j <= i)
            {
                cout << k;
                k++;
            }
            else
            {
                cout << n;
            }
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}