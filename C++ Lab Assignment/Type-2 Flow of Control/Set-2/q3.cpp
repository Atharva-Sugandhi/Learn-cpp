#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n;
    cout << "Enter a Value== ";
    cin >> n;
    int f = 1;

    while (i <= n)
    {
        f = f * i;
        i++;
    }
    cout << "Factorial for Value is== " << f << endl;

    return 0;
}