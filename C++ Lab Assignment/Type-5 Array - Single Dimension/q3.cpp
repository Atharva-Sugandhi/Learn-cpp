#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number of Elements of the Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements of the Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "After reversing Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}