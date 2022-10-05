#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter A Number=";
    cin >> n;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime\n";
            break;
        }
        i++;
    }
    if (i == n)
    {
        cout << "Prime\n";
    }

    return 0;
}