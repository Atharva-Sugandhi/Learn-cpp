#include <iostream>
using namespace std;

void pushZeroesEnd(int *arr, int n)
{
    //Runtime Error :((

    /*int temp[100];        //here you can put size of temp array as n; and problem will be resolved :)))))
    for (int k = 0; k < n;)
    {
        int i;

        if (i == n)
        {
            for (; k < n; k++)
            {
                temp[k] = 0;
            }
        }

        else
        {
            for (i = 0; i < n; i++)
            {
                if (arr[i] != 0)
                {
                    temp[k] = arr[i];
                    k++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int t = arr[i];
        arr[i] = temp[i];
        temp[i] = t;
    }
    return;*/

    //Time efficient approach :))

    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            arr[i] = arr[j];
            i++;
        }
        else
        {
            continue;
        }
    }
    for (; i < n; i++)
    {
        arr[i] = 0;
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
    pushZeroesEnd(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}