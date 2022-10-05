#include <iostream>
using namespace std;

bool even(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
int main()
{

    int n;
    cin >> n;

    if (even(n))
    {
        cout << "Even Number\n";
    }
    else
    {
        cout << "Odd Number\n";
    }

    return 0;
}