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
        int k = n;
        while (j <= i)
        {
            cout << k;
            j++;
            k--;
        }
        i--;
        cout << endl;
    }

    return 0;
}