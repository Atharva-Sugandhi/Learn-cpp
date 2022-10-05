#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number of Elements in the Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxele = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxele = max(maxele, arr[i]);
    }

    int minele = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minele = min(minele, arr[i]);
    }

    cout << "MAXIMUM ELEMENT: " << maxele << endl;
    cout << "MINIMUM ELEMENT: " << minele << endl;

    return 0;
}