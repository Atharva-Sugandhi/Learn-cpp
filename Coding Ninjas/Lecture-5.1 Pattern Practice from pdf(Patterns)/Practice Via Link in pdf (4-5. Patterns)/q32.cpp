#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int k = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << k;
            k++;
            j++;
        }
        j = 1;
        int l = k - 2;
        while (j <= i - 1)
        {
            cout << l;
            l--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}