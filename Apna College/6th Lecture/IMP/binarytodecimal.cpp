#include <iostream>
using namespace std;

int binarytodecimal(int num)
{

    int ans = 0;
    int x = 1;

    while (num > 0)
    {
        int y = num % 10;
        ans = ans + x * y;
        x = x * 2;
        num = num / 10;
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;

    cout << binarytodecimal(n) << endl;

    return 0;
}