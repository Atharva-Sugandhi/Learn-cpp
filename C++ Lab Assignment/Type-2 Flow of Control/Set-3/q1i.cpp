#include <iostream>
using namespace std;

int main()
{

    int l, b;
    cout << "Enter Length and Breath of Pattern=\t";
    cin >> l >> b;

    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}