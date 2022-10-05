#include <iostream>
using namespace std;

void zero_small(int &a, int &b) //(&) idk what its stands for :((      -MAY BE IT IS USE TO RETURN CHANGE VALUE-
//&stands for the address of the variable :))
{

    if (a > b)
    {
        b = 0;
    }
    else
    {
        a = 0;
    }
    return;
}

int main()
{

    int a, b;
    cout << "Enter 2 Numbers==";
    cin >> a >> b;

    zero_small(a, b);

    cout << "First Number is==" << a << endl;
    cout << "Second Number is==" << b << endl;

    return 0;
}