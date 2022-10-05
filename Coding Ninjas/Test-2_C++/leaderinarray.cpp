#include <iostream>
using namespace std;

void leaderInArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                break;
            }
        }
        if (j == n)
        {
            cout << arr[i] << " ";
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

    leaderInArray(arr, n);

    return 0;
}