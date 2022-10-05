#include <iostream>
using namespace std;

int main()
{

    int n, sum_p = 0, sum_n = 0, sum_z = 0;
    char choice;

    do
    {
        cout << "Enter a Number==";
        cin >> n;

        if (n > 0)
        {
            sum_p++;
        }
        else if (n < 0)
        {
            sum_n++;
        }
        else
        {
            sum_z++;
        }
        cout << "\nDo you want to continue?(Y/N)";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Positive Numbers==" << sum_p << endl;
    cout << "Negative Numbers==" << sum_n << endl;
    cout << "Zeros==" << sum_z << endl;

    return 0;
}