#include <iostream>
using namespace std;

bool bsearch(int arr[], int n, int VAL)
{
    int M, right = n - 1, left = 0;
    while (right >= left)
    {
        M = (right + left) / 2;
        if (arr[M] > VAL)
        {
            right = M - 1;
        }
        else if (arr[M] < VAL)
        {
            left = M + 1;
        }
        else
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
    found = bsearch(arr, n, VAL);

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