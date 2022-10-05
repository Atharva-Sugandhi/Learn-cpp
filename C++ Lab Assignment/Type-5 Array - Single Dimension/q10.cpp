#include <iostream>
using namespace std;

void createmix(int ar1[], int n, int ar2[], int m, int *mix)
{
    int ev = 0, od = (n + m - 1);

    //for ar1--
    for (int i = 0; i < n; i++)
    {
        if (ar1[i] % 2 == 0)
        {
            mix[ev] = ar1[i];
            ev++;
        }
        else
        {
            mix[od] = ar1[i];
            od--;
        }
    }

    //for ar2--
    for (int i = 0; i < m; i++)
    {
        if (ar2[i] % 2 == 0)
        {
            mix[ev] = ar2[i];
            ev++;
        }
        else
        {
            mix[od] = ar2[i];
            od--;
        }
    }
    return;
}

int main()
{
    int ar1[100], ar2[100], mix[200];
    int n, m;

    //Input in ar1--
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }

    //Input in ar2--
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> ar2[i];
    }

    //Calling function--
    createmix(ar1, n, ar2, m, mix);

    //Print mix--
    for (int i = 0; i < (m + n); i++)
    {
        cout << mix[i] << " ";
    }
    cout << endl;

    return 0;
}