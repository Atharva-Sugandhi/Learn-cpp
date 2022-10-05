#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int rev = 0;
    for (int num = N; num > 0; num /= 10)
    {
        int lastdigit = num % 10;
        rev = rev * 10 + lastdigit;
    }
    cout << rev << endl;

    return 0;
}