#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter no. of values you want to insert = ";
    cin >> n;

    int arr[n];

    cout << "Enter Elements of Array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of Array = " << sum << endl;
    float avg;
    avg = (sum / n);
    cout << "Average of Array = " << avg << endl;

    return 0;
}