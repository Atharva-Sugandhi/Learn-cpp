#include <iostream>
using namespace std;

void spiralPrint(int arr[][100], int r, int c)
{
    int t_row = 0, b_row = r - 1, l_col = 0, r_col = c - 1;
    while (t_row <= b_row && l_col <= r_col)
    {
        // Top row--
        for (int i = l_col; i <= r_col; i++)
        {
            cout << arr[t_row][i] << " ";
        }
        t_row++;

        // Right column--
        for (int i = t_row; i <= b_row; i++)
        {
            cout << arr[i][r_col] << " ";
        }
        r_col--;

        // Bottom row--
        for (int i = r_col; i >= l_col; i--)
        {
            cout << arr[b_row][i] << " ";
        }
        b_row--;

        // left column--
        for (int i = b_row; i >= t_row; i--)
        {
            cout << arr[i][l_col] << " ";
        }
        l_col++;
    }
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

    spiralPrint(arr, r, c);

    return 0;
}