#include <iostream>
using namespace std;

int main()
{

    int n = 1, m = 6, l = 13, o = 16;
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 5)
        {
            if (i == 1)
            {
                cout << n << "      ";
                n++;
            }
            else if (i == 5)
            {
                cout << l << ' ';
                l--;
            }
            else
            {
                if (j == 1)
                {
                    cout << o << " ";
                    o--;
                }
                else if (j == 5)
                {
                    cout << m++ << " ";
                }
                else
                {
                    cout << "   ";
                }
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}