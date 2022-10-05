#include <iostream>
using namespace std;

int main()
{

    int n, max = 0, min = 0;
    char choice;
    int ma = 0, mi = 0;

    do
    {
        cout << "Enter A Number=\t";
        cin >> n;

        if (n >= ma)
        {
            ma = n;
        }
        else if (n <= ma)
        {
            mi = n;
        }
        cout << "Do you want to Continue?(Y/N)\t";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    max = ma;
    min = mi;

    cout << "Max=\t" << max << endl;
    cout << "Min=\t" << min << endl;

    return 0;
}