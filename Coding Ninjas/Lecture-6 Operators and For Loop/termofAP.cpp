#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if ((3 * i + 2) % 4 == 0)
        {
            N++;
            continue;
        }
        cout << 3 * i + 2 << " ";
    }

    return 0;
}