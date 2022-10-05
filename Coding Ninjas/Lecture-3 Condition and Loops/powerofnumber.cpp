#include <iostream>
using namespace std;

int main()
{

    int x, n;
    cin >> x >> n;

    if (x == 0 && n == 0)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 1, i = 1;

    while (i <= n)
    {
        ans = ans * x;
        i++;
    }

    cout << ans << endl;

    return 0;
}