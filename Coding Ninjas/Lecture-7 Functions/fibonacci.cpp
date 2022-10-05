#include <iostream>
using namespace std;

bool checkMember(int n)
{
    int f = 0, s = 1;
    while (f <= n)
    {
        int temp = f + s;
        if (f == n)
        {
            return true;
        }
        f = s;
        s = temp;
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    bool valid = checkMember(n);

    if (valid)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}