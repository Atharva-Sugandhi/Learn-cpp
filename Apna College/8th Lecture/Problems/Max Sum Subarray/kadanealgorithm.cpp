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

    int cummsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cummsum = cummsum + arr[i];
        if (cummsum < 0)
        {
            cummsum = 0;
        }
        maxsum = max(cummsum, maxsum);
    }

    cout << maxsum << endl;

    return 0;
}