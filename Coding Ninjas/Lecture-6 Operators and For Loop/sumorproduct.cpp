#include <iostream>
using namespace std;

int main()
{

    int N, C;
    cin >> N >> C;

    if (C == 1)
    {
        int sum = 0;
        for (int i = 1; i <= N; i++)
        {
            sum = sum + i;
        }
        cout << sum << endl;
    }
    else if (C == 2)
    {
        int pro = 1;
        for (int i = 1; i <= N; i++)
        {
            pro = pro * i;
        }
        cout << pro << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}