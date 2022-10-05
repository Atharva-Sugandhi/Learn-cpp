#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int f = 0;
    int s = 1;
    int i, k = 0;

    if (n == 1)
    {
        cout << "0 \n";
    }
    else if (n == 2)
    {
        cout << "0 1 \n";
    }
    else
    {
        cout << "0 1 ";
        i = 3;
        while (i <= n)
        {
            k = f + s;

            cout << k << " ";

            f = s;
            s = k;
            i++;
        }
        cout << endl;
    }

    return 0;
}