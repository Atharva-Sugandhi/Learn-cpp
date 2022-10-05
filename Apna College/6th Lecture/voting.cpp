#include <iostream>
using namespace std;

bool age(int a)
{
    if (a >= 18)
    {
        return true;
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    if (age(n))
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Not Eligible" << endl;
    }
    return 0;
}