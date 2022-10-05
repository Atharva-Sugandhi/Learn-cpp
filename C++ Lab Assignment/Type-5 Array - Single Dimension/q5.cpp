#include <iostream>
using namespace std;

void Accept(int arr[], int n);
void Display(int arr[], int n);
void Insertion(int arr[], int n);
void Selection(int arr[], int n);
void Bubble(int arr[], int n);

int main()

{

    int n, arr[1000];
    int choice;

    cout << "\nEnter number of elements in the Array: ";
    cin >> n;

    do
    {
        cout << "\nChoose a choice from given choices:-\n "
             << "\nChoice 1: Accept Element of Array\n"
             << "Choice 2: Display Element of Array\n"
             << "Choice 3: Sort array using insertion sorting\n"
             << "Choice 4: Sort array using selection sorting\n"
             << "Choice 5: Sort array using bubble sorting\n"
             << "Choice 6: Exit\n";

        cout << "\nEnter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Accept(arr, n);
            break;

        case 2:
            Display(arr, n);
            break;

        case 3:
            Insertion(arr, n);
            break;

        case 4:
            Selection(arr, n);
            break;

        case 5:
            Bubble(arr, n);
            break;

        case 6:
            break;

        default:
            cout << "\nInput Invalid" << endl;
        }
    } while (choice != 6);

    return 0;
}
void Accept(int arr[], int n)
{
    cout << "\nEnter Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Display(int arr[], int n)
{
    cout << "\nElements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void Selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void Bubble(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}