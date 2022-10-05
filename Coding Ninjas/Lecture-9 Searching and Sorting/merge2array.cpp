#include <iostream>
using namespace std;

void merge(int a[], int n, int b[], int m, int c[])
{
    //Method=1:

    /*int i = 0, j = 0, k = 0;
    while (k < (m + n))
    {

        if (i == n)
        {
            for (; k < m + n; k++)
            {
                c[k] = b[j];
                j++;
            }
            return;
        }

        else if (j == m)
        {
            for (; k < m + n; k++)
            {
                c[k] = a[i];
                i++;
            }
            return;
        }
        else
        {
            if (a[i] < b[j])
            {
                c[k] = a[i];
                i++;
                k++;
                continue;
            }
            else if (a[i] >= b[j])
            {
                c[k] = b[j];
                j++;
                k++;
                continue;
            }
        }
    }
    return;*/

    //Method=2:

    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < m)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    return;
}

int main()
{

    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[100];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c[200];
    merge(a, n, b, m, c);

    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}