#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    int r_dia = 0, c_dia = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                r_dia = r_dia + arr[i][j];
            }
            else if (i + j == (n - 1))
            {
                c_dia = c_dia+arr[i][j];
            }
        }
    }
    cout << r_dia << endl
         << c_dia << endl;

    return 0;
}