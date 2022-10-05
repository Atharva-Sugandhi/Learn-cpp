#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of terms of Series=\t";
    cin >> n;
    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }

    cout << "Sum=\t" << sum << endl;

    return 0;
}