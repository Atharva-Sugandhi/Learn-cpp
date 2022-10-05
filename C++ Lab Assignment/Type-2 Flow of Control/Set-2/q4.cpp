#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter 2 Numbers== ";
    cin >> a >> b;
    int i = 1;
    int l = 1;

    while (i <= b)
    {
        l = l * a;
        i++;
    }
    cout << l;
    return 0;
}
