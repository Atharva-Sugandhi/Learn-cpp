#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of terms of Series=\t";
    cin >> n;
    int sign = -1;
    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sign = sign * (-1);
        sum = sum + sign * (1.0 / i);
    }

    cout << "log2=\t" << sum << endl;

    return 0;
}