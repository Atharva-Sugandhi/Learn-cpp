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
        int element = (n - row + 1);
        while (col <= (n - row + 1))
        {
            cout << element;
            col++;
        }
        row++;
        cout << endl;
    }

    return 0;
}