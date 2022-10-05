#include <iostream>
using namespace std;

void sortZeroesAndOne(int *arr, int n)
{
    int zeroes = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroes++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
    }
    int i;
    for (i = 0; i < zeroes; i++)
    {
        arr[i] = 0;
    }
    for (i = zeroes; i < n; i++)
    {
        arr[i] = 1;
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

    sortZeroesAndOne(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}