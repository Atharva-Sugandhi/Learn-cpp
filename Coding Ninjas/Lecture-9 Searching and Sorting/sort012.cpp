#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int nz = 0, nt = n - 1;
    for (int i = 0; i <= nt;) //rather putting i<n just put this to avoid exceeding time-limit.
    {
        if (arr[i] == 0)
        {
            if (i == nz)
            {
                i++;
                nz++;
            }
            else
            {
                int t = arr[i];
                arr[i] = arr[nz];
                arr[nz] = t;
                nz++;
            }
        }
        else if (arr[i] == 2)
        {
            if (i == nt)
            {
                return;
            }
            else
            {
                int t = arr[i];
                arr[i] = arr[nt];
                arr[nt] = t;
                nt--;
            }
        }
        else if (arr[i] == 1)
        {
            i++;
        }
    }
    return;
}

int main()
{

    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort012(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}