#include <iostream>
using namespace std;

void maxmin(int a, int b)
{
    if (a > b)
    {
        cout << "Max=\t" << a << endl;
        cout << "Min=\t" << b << endl;
    }
    else if (a == b)
    {
        cout << "Both are Equal";
    }
    else if (a < b)
    {
        cout << "Max=\t" << b << endl;
        cout << "Min=\t" << a << endl;
    }
    return;
}

int main()
{

    int a, b;
    cin >> a >> b;

    maxmin(a, b);

    return 0;
}