#include <iostream>
using namespace std;

bool lsearch(int arr[], int n, int VAL)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == VAL)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int n;
    cout << "Enter Number of Elements in Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int VAL;
    cout << "Enter a Number you want to serch: ";
    cin >> VAL;

    bool found;
    found = lsearch(arr, n, VAL);

    if (found)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}