#include <iostream>
#include <climits>
using namespace std;

void intersection(int ar1[], int *ar2, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar1[i] == ar2[j])
            {
                cout << ar1[i] << " ";
                ar2[j] = -1;
                break;
            }
        }
    }
    return;
}

int main()
{

    int n, m;
    cin >> n;

    int ar1[100], ar2[100];
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }

    cin >> m;
    for (int j = 0; j < m; j++)
    {
        cin >> ar2[j];
    }

    intersection(ar1, ar2, n, m);

    return 0;
}