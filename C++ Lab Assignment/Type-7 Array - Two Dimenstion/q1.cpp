#include <iostream>
using namespace std;

void input(int arr[][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    return;
}

void print(int arr[][100], int r, int c)
{
    cout << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void totalSum(int arr[][100], int r, int c)
{
    cout << endl;

    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    cout << "Total Sum is: " << sum << endl;
    return;
}

void rowWiseSum(int arr[][100], int r, int c)
{
    cout << "\nRow-wise Sum: ";
    for (int i = 0; i < r; i++)
    {
        int r_sum = 0;
        for (int j = 0; j < c; j++)
        {
            r_sum = r_sum + arr[i][j];
        }
        cout << r_sum << " ";
    }
    cout << endl;
    return;
}

void columnWiseSum(int arr[][100], int r, int c)
{
    cout << "\nColumn-wise Sum: ";
    for (int i = 0; i < c; i++)
    {
        int c_sum = 0;
        for (int j = 0; j < r; j++)
        {
            c_sum = c_sum + arr[j][i];
        }
        cout << c_sum << " ";
    }
    cout << endl;
    return;
}

void transposeMatrix(int arr[][100], int r, int c)
{
    cout << endl;
    int tarr[100][100];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            tarr[i][j] = arr[j][i];
        }
    }

    int t_c = r;
    int t_r = c;

    for (int i = 0; i < t_r; i++)
    {
        for (int j = 0; j < t_c; j++)
        {
            cout << tarr[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

int main()
{
    int r, c;
    int arr[100][100];

    cout << "Enter no. of rows and column: ";
    cin >> r >> c;

    int choice;

    do
    {
        cout << "\nEnter A choice: \n\n";

        cout << "Choice-1: Input elements- \n";
        cout << "Choice-2: Display elements- \n";
        cout << "Choice-3: Total Sum of elements- \n";
        cout << "Choice-4: Row-wise Sum elements- \n";
        cout << "Choice-5: Column-wise Sum elements- \n";
        cout << "Choice-6: Transpose of matrix- \n";
        cout << "Choice-7: Exit \n\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            input(arr, r, c);
            break;

        case 2:
            print(arr, r, c);
            break;

        case 3:
            totalSum(arr, r, c);
            break;

        case 4:
            rowWiseSum(arr, r, c);
            break;

        case 5:
            columnWiseSum(arr, r, c);
            break;

        case 6:
            transposeMatrix(arr, r, c);
            break;

        case 7:
            cout << "\nThankyou for using ATOM'S SERVICE :))\n\n";
            break;

        default:
            cout << "Choice Not Valid :((\n";
            cout << "--Choose Again--\n";
            break;
        }
    } while (choice != 7);

    return 0;
}