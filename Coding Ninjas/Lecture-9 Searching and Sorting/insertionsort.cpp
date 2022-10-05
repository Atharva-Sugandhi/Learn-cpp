#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    //Method-1--

    /*for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
    return;*/

    //Method-2--

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > curr)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = curr;
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
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}