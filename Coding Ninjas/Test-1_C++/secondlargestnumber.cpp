#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long sec;
    long lar = INT_MIN;
    long in;

    if (n == 0)
    {
        cout << INT_MIN << endl;
        return 0;
    }

    else if (n == 1)
    {
        cin >> in;
        cout << INT_MIN << endl;
        return 0;
    }

    int i = 1;
    while (i <= n)
    {
        cin >> in;

        if (in > lar)
        {
            sec = lar;
            lar = in;
        }
        else if (in > sec && in < lar)
        {
            sec = in;
        }

        i++;
    }

    cout << sec << endl;

    return 0;
}