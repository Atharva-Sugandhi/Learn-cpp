#include <iostream>
using namespace std;

int pairSum(int input[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (input[i] + input[j] == x)
            {
                count++;
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

    int ans = pairSum(input, n, x);

    cout << ans << endl;
    return 0;
}