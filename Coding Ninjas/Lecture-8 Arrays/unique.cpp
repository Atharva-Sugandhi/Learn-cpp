#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int current = 0;
    int ans;
    while (current < n)
    {
        bool dublicate = false;
        for (int i = 0; i < n; i++)
        {

            if (i != current)
            {
                if (arr[i] == arr[current])
                {
                    dublicate = true;
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
        if (dublicate == false)
        {
            ans = arr[current];
            return ans;
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

    int ans = findUnique(arr, n);

    cout << ans << endl;

    return 0;
}