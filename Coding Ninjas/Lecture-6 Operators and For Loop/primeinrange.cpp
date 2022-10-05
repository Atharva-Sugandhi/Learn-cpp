#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int num = 2; num <= n; num++)
    {
        bool divisible = false;
        for (int div = 2; div < num; div++)
        {
            if (num % div == 0)
            {
                divisible = true;
                break;
            }
        }
        if (divisible)
        {
            continue;
        }
        cout << num << endl;
    }

    return 0;
}