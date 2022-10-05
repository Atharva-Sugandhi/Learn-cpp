#include <iostream>
using namespace std;

int main()
{
    int a, b, r, hcf;
    cout << "Enter 2 Numbers==";
    cin >> a >> b;

    while (r != 0)
    {

        r = a % b;

        if (r == 0)
        {

            hcf = b;
        }
        else
        {

            a = b;
            b = r;
        }
    }

    cout << "HCF==" << hcf << endl;

    return 0;
}