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
        int ele = row;
        while (col <= row)
        {
            cout << ele;
            ele--;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}