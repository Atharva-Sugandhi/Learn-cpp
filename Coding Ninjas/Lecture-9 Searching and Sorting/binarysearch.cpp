#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int start = 0, end = n - 1;
    int M, ans;
    while (start <= end)
    {
        M = (start + end) / 2;

        if (arr[M] == x)
        {
            ans = M;
            return ans;
        }
        else if (arr[M] > x)
        {
            end = M - 1;
        }
        else
        {
            start = M + 1;
        }
    }
    ans = -1;
    return ans;
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

    int t;
    cin >> t;

    int x, i = 1;
    while (i <= t)
    {

        cin >> x;

        int ans = binarySearch(arr, n, x);

        cout << ans << endl;
        i++;
    }

    return 0;
}