#include <iostream>
using namespace std;

void swapAlternate(int *arr, int n)
{
    for (int s = 0, e = 1; e < n; s += 2, e += 2)
    {
        int temp = arr[e];
        arr[e] = arr[s];
        arr[s] = temp;
    }
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        swapAlternate(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        i++;
    }

    return 0;
}