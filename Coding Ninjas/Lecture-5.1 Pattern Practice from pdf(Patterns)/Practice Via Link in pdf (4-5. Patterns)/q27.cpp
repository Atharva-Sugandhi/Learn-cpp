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
        int k = 5;
        while (j <= n)
        {
            if (j == n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << k;
            }
            j++;
            k--;
        }
        cout << endl;
        i++;
    }

    return 0;
}