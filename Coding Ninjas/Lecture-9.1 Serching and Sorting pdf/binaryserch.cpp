#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int st = 0, en = n - 1;
    int ans;
    while (st <= en)
    {
        int M = (st + en) / 2;
        if (x == arr[M])
        {
            ans = M;
            return ans;
        }
        else if (x > arr[M])
        {
            st = M + 1;
        }
        else
        {
            en = M - 1;
        }
    }
    return -1;
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

    int x;
    cin >> x;

    int ans = binarySearch(arr, n, x);

    cout << ans << endl;

    return 0;
}