#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    cout << "0" << endl;
    while (i >= 1)
    {
        int j = i;
        while (j <= 9)
        {
            cout << j;
            j++;
        }
        cout << 0;
        j = 1;
        int k = 9;
        while (j <= 9 - i + 1)
        {
            cout << k;
            k--;
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}