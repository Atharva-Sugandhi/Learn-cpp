#include <iostream>
#include <climits>
using namespace std;

int Kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int nonwrapSum = Kadane(arr, n);
    int wrapsum;
    int totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        totalsum = totalsum + arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum - (-Kadane(arr, n));

    cout << max(wrapsum, nonwrapSum) << endl;

    return 0;
}