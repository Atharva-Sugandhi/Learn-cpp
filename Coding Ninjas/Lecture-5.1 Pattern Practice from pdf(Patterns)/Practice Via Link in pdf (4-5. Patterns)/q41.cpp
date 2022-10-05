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
        while (j <= i)
        {
            if (i % 2 == 0)
            {
                cout << '0';
            }
            else
            {
                cout << '1';
            }
            j++;
        }
        i--;
        cout << endl;
    }

    return 0;
}