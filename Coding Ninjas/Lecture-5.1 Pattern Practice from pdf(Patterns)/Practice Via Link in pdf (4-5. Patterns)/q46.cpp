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
        while (j <= n)
        {
            if (j == i)
            {
                cout << "*";
            }
            else
            {
                cout << "0";
            }
            j++;
        }
        cout << "*";
        j = n;
        while (j >= 1)
        {
            if (j == i)
            {
                cout << "*";
            }
            else
            {
                cout << "0";
            }
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}