#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int k = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            if (j <= i)
            {
                cout << k << " ";
                k++;
            }
            else
            {
                cout << "  ";
            }
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}