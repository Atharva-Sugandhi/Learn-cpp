#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        if (i % 2 == 0)
        {
            int k = i;
            int j = 1;
            while (j <= i)
            {
                cout << k;
                k--;
                j++;
            }
        }
        else
        {
            int j = 1;
            while (j <= i)
            {
                cout << j;
                j++;
            }
        }
        cout << endl;
        i--;
    }

    return 0;
}