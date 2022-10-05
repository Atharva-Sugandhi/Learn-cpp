#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int val = 1;
    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        arr[i] = val;
        val = val + 2;
    }
    if (n % 2 == 0)
    {
        val = n;
    }
    else
    {
        val = n - 1;
    }
    for (int i = ((n - 1) / 2) + 1; i < n; i++)
    {
        arr[i] = val;
        val = val - 2;
    }
    return;
}

int main()
{
    int t;
    cin >> t;

    int i = 1;
    while (i <= t)
    {
        int n;
        cin >> n;

        int arr[100];

        arrange(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        i++;
    }
    return 0;
}