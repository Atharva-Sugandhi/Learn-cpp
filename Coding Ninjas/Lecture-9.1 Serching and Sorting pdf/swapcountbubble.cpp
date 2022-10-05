#include <iostream>
using namespace std;

int BubbleSort(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int j = 0;
        while (j < n - i)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                count++;
            }
            j++;
        }
    }
    return count;
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

    int ans = BubbleSort(arr, n);

    cout << ans << endl;

    return 0;
}