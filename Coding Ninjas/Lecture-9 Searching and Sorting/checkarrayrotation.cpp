#include <iostream>
using namespace std;

int arrayRotateCheck(int arr[], int n)
{
    int ans = 1;

    if(n==0){
        ans=0;
        return ans;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return ans;
        }
        else if (arr[i] > arr[i - 1])
        {
            ans++;
        }
    }
    if (ans == n)
    {
        ans = 0;
        return ans;
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

    int ans = arrayRotateCheck(arr, n);

    cout << ans << endl;

    return 0;
}