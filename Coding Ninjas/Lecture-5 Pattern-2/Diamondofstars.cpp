#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int n1 = (n + 1) / 2;
    int n2 = n1 - 1;

    int i = 1;
    while (i <= n1)
    {
        int space = 1;
        while (space <= n1 - i)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= 2 * i - 1)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while (i <= n2)
    {

        int space = 1;
        while (space <= i)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= n - 2 * i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}