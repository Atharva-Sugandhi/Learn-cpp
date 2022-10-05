#include <iostream>
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

    int i;
    int ans = 2;
    int pd = arr[1] - arr[0];
    int curr = 2;

    for (i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == pd)
        {
            curr++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = max(curr, ans);
    }
    cout << ans << endl;

    return 0;
}