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
        int k = i;
        int l;
        while (j <= i)
        {
            cout << k;
            l = k;
            k++;
            j++;
            l--;
        }

        j = 1;
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