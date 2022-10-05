#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char element = 'A' + n - row;
        while (col <= row)
        {
            cout << element;
            element++;
            col++;
        }
        row++;
        cout << endl;
    }

    return 0;
}