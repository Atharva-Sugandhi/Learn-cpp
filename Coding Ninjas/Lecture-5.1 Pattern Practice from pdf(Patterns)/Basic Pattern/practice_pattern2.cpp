#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        char element = 'A';
        while (j <= i)
        {
            cout << element;
            element++;
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}