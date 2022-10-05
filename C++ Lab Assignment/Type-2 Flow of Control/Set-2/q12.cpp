#include <iostream>
using namespace std;

int main()
{

    int n, f = 0, s = 1, t;
    cout << "Enter number of terms of Series=\t";
    cin >> n;

    cout << f << " " << s << " ";

    for (int i = 3; i <= n; i++)
    {
        t = f + s;
        cout << t << " ";
        f = s;
        s = t;
    }

    return 0;
}