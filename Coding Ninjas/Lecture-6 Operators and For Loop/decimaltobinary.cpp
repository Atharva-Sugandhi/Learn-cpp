#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int div = 1;
    for (; div <= N; div *= 2)
        ;
    div /= 2;

    int ans = 0;
    for (; div >= 1; div /= 2)
    {
        int q = N / div;

        N = N - q * div;

        ans = ans * 10 + q;
    }
    cout << ans << endl;

    return 0;
}