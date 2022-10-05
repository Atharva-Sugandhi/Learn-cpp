#include <iostream>
using namespace std;

bool alpha(char ch)
{
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        return true;
    }
    return false;
}
int main()
{

    char ch;
    cin >> ch;

    if (alpha(ch))
    {
        cout << "It is an Alphabet\n";
    }
    else
    {
        cout << "Not using Function\n";
    }

    return 0;
}