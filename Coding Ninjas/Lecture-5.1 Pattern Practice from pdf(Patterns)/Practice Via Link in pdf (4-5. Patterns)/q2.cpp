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
        int k = i;
        while (j <= n - i + 1)
        {
            cout << k;
            k++;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}