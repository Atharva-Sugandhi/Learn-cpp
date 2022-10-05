#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int commsum[n + 1];
    commsum[0] == 0;

    for (int i = 1; i <= n; i++)
    {
        commsum[i] = commsum[i - 1] + arr[i - 1];
    }

    int maxsum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;

        for (int j = 0; j <= i; j++)
        {
            sum = commsum[i] - commsum[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum << endl;

    return 0;
}