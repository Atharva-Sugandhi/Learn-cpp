#include <bits./stdc++.h>
using namespace std;

int main()
{

    long N;
    cin >> N;

    long rn = 0, count = 0;
    while (N > 0)
    {
        int lastdigit = N % 10;
        rn = rn * 10 + lastdigit;
        N = N / 10;
        count++;
    }

    int i = count;
    while (i >= 1)
    {
        long k = rn / pow(10, (count - i));
        int j = 1;
        while (j <= i)
        {
            int lastdigit = k % 10;
            cout << lastdigit << " ";
            k = k / 10;
            j++;
        }
        i--;
        cout << endl;
    }

    return 0;
}