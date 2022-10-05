#include <iostream>
using namespace std;

int findDublicate(int arr[], int n)
{
    int current = 0;
    int ans;
    while (current < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (current != i)
            {
                if (arr[current] == arr[i])
                {
                    ans = arr[current];
                    return ans;
                }
            }
            else
            {
                continue;
            }
        }
        current++;
    }
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

    int ans = findDublicate(arr, n);

    cout << ans << endl;

    return 0;
}