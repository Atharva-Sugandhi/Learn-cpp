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
        int k = i;
        while (j <= i)
        {
            cout << k;
            k--;
            j++;
        }
        i--;
        cout << endl;
    }

    return 0;
}