#include <iostream>
using namespace std;

void wavePrint(int arr[][100], int r, int c)
{
    for (int j = 0; j < c; j++)
    {
        if (j % 2 != 0)
        {
            for (int i = r - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < r; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    return;
}

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

    wavePrint(arr, r, c);

    return 0;
}