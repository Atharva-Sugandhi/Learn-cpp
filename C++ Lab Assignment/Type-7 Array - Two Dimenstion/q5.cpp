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

    int m_r = (n / 2);
    int m_c = (n / 2);

    for (int i = 0; i < n; i++)
    {
        cout << arr[m_r][i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][m_c] << " ";
    }

    return 0;
}