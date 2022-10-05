#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int arr[100][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        int r_mul = 1;
        for (int j = 0; j < c; j++)
        {
            r_mul *= arr[i][j];
        }
        cout << r_mul << " ";
    }

    cout << endl;

    return 0;
}