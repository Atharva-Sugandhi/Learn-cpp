#include <iostream>
using namespace std;

int fac(int num)
{
    int f = 1;
    for (int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{

    int n;
    cin >> n;

    cout << fac(n) << endl;

    return 0;
}