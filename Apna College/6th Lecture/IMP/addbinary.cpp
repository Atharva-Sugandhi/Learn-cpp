#include <iostream>
using namespace std;

int binarytodecimal(int n)
{

    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int r = n % 10;
        ans = ans + x * r;
        x = x * 2;
        n /= 10;        
    }
    return ans;
}

int decimaltobinary(int n)
{

    int ans = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int k = binarytodecimal(n1) + binarytodecimal(n2);

    cout << k << endl;
    cout << decimaltobinary(k) << endl;

    return 0;
}