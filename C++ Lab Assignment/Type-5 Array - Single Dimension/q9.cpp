#include <iostream>
using namespace std;

void mergearray(int ar1[], int n, int ar2[], int m, int merge[], int &k)
{

    //Smallest Print first--

    k = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (ar1[i] > ar2[j])
        {
            merge[k] = ar1[i];
            i++;
            k++;
        }
        else
        {
            merge[k] = ar2[j];
            j++;
            k++;
        }
    }

    //Print Leftones--

    for (int l = i; l < n; l++)
    {
        merge[k] = ar1[l];
        k++;
    }

    for (int p = j; p < m; p++)
    {
        merge[k] = ar2[p];
        k++;
    }

    return;
}

int main()
{
    int ar1[100], ar2[100];
    int n, m;
    int merge[200], k;

    //ar1 in decending order--

    cout << "Enter no. of elements: ";
    cin >> n;

    cout << "Enter elements of ar1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }

    //ar2 in decending order--

    cout << "Enter no. of elements: ";
    cin >> m;

    cout << "Enter elements of ar2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> ar2[i];
    }

    mergearray(ar1, n, ar2, m, merge, k);

    //Print merge--

    for (int i = 0; i < k; i++)
    {
        cout << merge[i] << " ";
    }
    cout << endl;

    return 0;
}