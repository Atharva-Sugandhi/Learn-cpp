#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int last_digit;
    int num = N, esum = 0, osum = 0;

    while (num > 0)
    {
        last_digit = num % 10;

        if (last_digit % 2 == 0)
        {
            esum = esum + last_digit;
        }
        else
        {
            osum = osum + last_digit;
        }
        num = num / 10;
    }
    cout << esum << " " << osum << endl;

    return 0;
}