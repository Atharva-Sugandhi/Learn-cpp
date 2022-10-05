#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    if (N == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    else
    {
        int ans;
        for (int f = 0, s = 1, count = 1; count <= N; count++)
        {

            int temp = f + s;
            f = s;
            s = temp;
            ans = f;
        }
        cout << ans << endl;
    }

    return 0;
}