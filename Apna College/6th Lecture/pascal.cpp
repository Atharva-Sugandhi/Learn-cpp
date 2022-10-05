#include <iostream>
using namespace std;

int fac(int num)
{
    int f = 1;
    for (int i = 1; i <= num; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << fac(i) / (fac(j) * fac(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}