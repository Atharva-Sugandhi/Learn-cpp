#include <iostream>
using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    //Column-wise Sum--

    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}