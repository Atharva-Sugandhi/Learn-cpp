#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    int k = 1;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << k << "  ";
            k++;
            j++;
        }
        i--;

        cout << endl;
    }

    return 0;
}