#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1, count = 1;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            int j = 1;
            int l = count + i - 1;
            while (j <= i)
            {
                cout << l << " ";

                l--;
                j++;
                count++;
            }
        }
        else
        {
            int j = 1;
            int k = count;
            while (j <= i)
            {
                cout << k << " ";
                k++;
                j++;
                count++;
            }
        }
        cout << endl;
        i++;
    }

    return 0;
}