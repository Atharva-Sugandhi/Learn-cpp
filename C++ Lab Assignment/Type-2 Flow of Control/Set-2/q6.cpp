#include <iostream>
using namespace std;

int main()
{

    int n, t, r, sum = 0;
    cout << "Enter a Number==";
    cin >> n;

    t = n;

    while (t > 0)
    {
        r = t % 10;
        t = t / 10;
        sum = sum + r;
    }
    cout << "Sum of digitd is==" << sum << endl;

    return 0;
}