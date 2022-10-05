#include <iostream>
using namespace std;

int main()
{

    int i = 1, k = 13, l = 16, m = 6;

    while (i <= 5)
    {
        int j = 1;
        while (j <= 5)
        {
            if (i == 1)
            {
                cout << j << " ";
            }
            else if (i == 5)
            {
                cout << k << " ";
                k--;
            }
            else if (j == 1)
            {
                cout << l << " ";
                l--;
            }
            else if (j == 5)
            {
                cout << m << " ";
                m++;
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}