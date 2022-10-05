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
        while (j <= i)
        {
            cout << k;
            k = k + n - j;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}