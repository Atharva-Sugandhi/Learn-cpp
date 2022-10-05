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
    int n, r;
    cin >> n >> r;

    int C = fac(n) / (fac(r) * fac(n - r));

    cout << C << endl;
}