#include <iostream>
using namespace std;

void print2Darray(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        int k = 1;
        while (k <= r - i)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
            k++;
        }
    }
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

    print2Darray(arr, r, c);

    return 0;
}