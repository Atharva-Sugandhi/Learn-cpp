#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int b_num;
    cin >> b_num;

    int d_num = 0;
    for (int num = b_num, count = 0; num > 0; num /= 10, count++)
    {
        int lastdigit = num % 10;
        d_num = d_num + lastdigit * pow(2, count);
    }
    cout << d_num << endl;

    return 0;
}