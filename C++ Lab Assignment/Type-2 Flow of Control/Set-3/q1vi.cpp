#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter numbers of rows==";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        int j;
        for (j = 1; j <= i; j++)
        {

            cout << k;
            k--;
        }
        k = 2;
        for (j = 1; j <= i - 1; j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }

    return 0;
}