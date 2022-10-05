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
        int k = i, l = 2;
        while (j <= n)
        {
            if (j <= i)
            {
                cout << k;
                k--;
            }
            else
            {
                cout << l;
                l++;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}