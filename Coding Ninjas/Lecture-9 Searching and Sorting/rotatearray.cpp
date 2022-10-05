#include <iostream>
using namespace std;

void rotate(int *arr, int d, int n)
{
    int temp[n];
    int j = 0;
    for (int i = d; i < n; i++)
    {
        temp[j] = arr[i];
        j++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        int t = temp[i];
        temp[i] = arr[i];
        arr[i] = t;
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

    int d;
    cin >> d;

    rotate(arr, d, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}