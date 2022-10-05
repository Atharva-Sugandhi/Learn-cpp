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
        int k = n;
        while (j <= i)
        {
            cout << k;
            j++;
            k--;
        }
        i++;
        cout << endl;
    }

    return 0;
}