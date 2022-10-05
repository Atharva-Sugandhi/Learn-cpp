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
        while (j <= n)
        {
            if (j <= i)
            {
                cout << j;
            }
            else
            {
                cout << "*";
            }
            j++;
        }

        j = n;
        while (j >= 1)
        {
            if (j <= i)
            {
                cout << j;
            }
            else
            {
                cout << "*";
            }
            j--;
        }
        cout << endl;
        i--;
    }

    return 0;
}