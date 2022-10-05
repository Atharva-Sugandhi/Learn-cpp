#include <iostream>
using namespace std;

int hexadecimaltodecimal(string n)
{

    int sum = 0;
    int x = 1;

    int s = n.size(); // To be taught in Strings(Arrays)

    for (int i = s - 1; i >= 0; i--)
    {

        if (n[i] >= '0' && n[i] <= '9')
        {
            sum = sum + x * n[i];
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            sum = sum + x * (n[i] - 'A' + 10);
        }
        x = x * 16;
    }

    return sum;
}

int main()
{

    string n;
    cin >> n;

    cout << hexadecimaltodecimal(n) << endl;

    return 0;
}