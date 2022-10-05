
// Pascals Triangle

#include <iostream>
using namespace std;

int fact(int n)
{

    int i = 1, ans = 1;

    while (i <= n)
    {
        ans = ans * i;
        i++;
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << fact(i) / (fact(i - j) * fact(j));
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}