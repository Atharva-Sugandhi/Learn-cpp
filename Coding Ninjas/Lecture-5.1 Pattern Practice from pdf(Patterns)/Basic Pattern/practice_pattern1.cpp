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
        int element = n - i + 1;
        while (j <= n)
        {
            if (element == n)
            {
                cout << n;
            }
            else
            {
                cout << element;
                element++;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}