#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int position = 1;
    long ans = 0;
    for (int num = N; num > 0; num /= 2)
    {
        int rem = num % 2;
        ans = ans + rem * position;
        position *= 10;
    }
    cout << ans << endl;

    return 0;
}