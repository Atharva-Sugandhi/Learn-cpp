#include <iostream>
using namespace std;

int main()
{

    char ch;
    ch = cin.get();

    int a = 0, b = 0, c = 0;

    while (ch != '$')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            a++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            b++;
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            c++;
        }
        ch = cin.get();
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}