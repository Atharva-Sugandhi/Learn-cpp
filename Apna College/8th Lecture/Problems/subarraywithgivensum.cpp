#include <iostream>
using namespace std;

int main()
{

    int n, S;
    cin >> n >> S;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 0, st = -1, ed = -1;
    int sum = 0;

    while (j < n && sum + arr[j] <= S)
    {
        sum = sum + arr[j];
        j++;
    }
    if (sum == S)
    {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
    }
    while (j < n)
    {
        sum = sum + arr[j];
        while (sum > S)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == S)
        {
            st = i + 1;
            ed = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << ed << endl;

    return 0;
}