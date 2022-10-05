#include <iostream>
using namespace std;

int tripletSum(int input[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int x;
    cin >> x;

    int ans = tripletSum(input, n, x);

    cout << ans << endl;
    return 0;
}