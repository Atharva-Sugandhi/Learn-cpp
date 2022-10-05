#include <iostream>
using namespace std;

int main()
{

    char ch;
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "1\n";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "0\n";
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}