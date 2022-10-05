#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number of Inputs for the Array = ";
    cin >> n;

    int arr[n];

    cout << "Enter the Inputs of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    cout << "After Swapping first and last elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}