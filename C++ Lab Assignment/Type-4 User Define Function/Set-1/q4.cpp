#include <iostream>
using namespace std;

double power(double n, int = 2);

double power(double n, int p)
{

    int ans = 1;
    for (int i = 1; i <= p; i++)
    {
        ans = ans * n;
    }
    return ans;
}

int main()
{

    int p;
    double n, r;
    cout << "Enter number and power==";
    cin >> n >> p;

    r = power(n, p);
    cout << "Result is==" << r << endl;

    r = power(n);
    cout << "Result after default power==" << r << endl;

    return 0;
}