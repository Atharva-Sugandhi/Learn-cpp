#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Enter a Number= ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }

    return 0;
}