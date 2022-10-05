#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int st = 0;
        while (st < n - 1 - i)
        {
            int en = st + 1;
            if (arr[st] > arr[en])
            {
                int temp = arr[st];
                arr[st] = arr[en];
                arr[en] = temp;
            }
            st++;
        }
    }
    return;
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}