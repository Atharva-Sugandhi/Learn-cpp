#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Enter a Value= ";
    cin >> a;

    if (a > 0)
    {
        cout << "Absolute Value= " << a;
    }
    else
    {
        cout << "Absolute Value= " << -a;
    }

    return 0;
}