#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int k = 11;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << k << " ";
            k++;
            j++;
        }
        k = k - i + 1;
        i++;
        cout << endl;
    }

    return 0;
}