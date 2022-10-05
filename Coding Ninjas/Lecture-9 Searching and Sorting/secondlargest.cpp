#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int lar = INT_MIN;
    int sec;

    if (n == 0)
    {
        return lar;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            sec = lar;
            lar = arr[i];
        }

        else if (arr[i] > sec && arr[i] < lar)
        {
            sec = arr[i];
        }
    }
    return sec;
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

    int ans = findSecondLargest(arr, n);

    cout << ans << endl;

    return 0;
}