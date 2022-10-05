#include <iostream>
#include <climits>
using namespace std;

void findLargest(int arr[][100], int r, int c)
{
    if (r == 0 & c == 0)
    {
        cout << "row 0 " << INT_MIN << endl;
        return;
    }

    int sum, ansrow = 0, anscol = 0, colin, rowin;
    for (int i = 0; i < r; i++)
    {
        sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > ansrow)
        {
            rowin = i;
        }
        ansrow = max(ansrow, sum);
    }

    for (int j = 0; j < c; j++)
    {
        sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > anscol)
        {
            colin = j;
        }
        anscol = max(anscol, sum);
    }
    int in;
    if (anscol > ansrow)
    {
        in = colin;
        cout << "column " << in << " ";
    }
    else
    {
        in = rowin;
        cout << "row " << in << " ";
    }
    int ans = max(ansrow, anscol);

    cout << ans << endl;
    return;
}

int main()
{
    int r, c;
    cin >> r >> c;

    int arr[100][100];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    findLargest(arr, r, c);

    return 0;
}