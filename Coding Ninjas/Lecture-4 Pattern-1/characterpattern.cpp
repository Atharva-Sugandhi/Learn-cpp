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
        char element = ('A' + row - 1) + col - 1;
        while (col <= row)
        {
            cout << element;
            col++;
            element++;
        }
        cout << endl;
        row++;
    }

    return 0;
}