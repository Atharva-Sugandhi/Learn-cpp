#include <iostream>
using namespace std;

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            // if (arr[j] < arr[i])
            // {
            //     int temp = arr[j];
            //     arr[j] = arr[i];
            //     arr[i] = temp;
            // }
        }
        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=arr[temp];
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

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}