#include <iostream>
using namespace std;

bool palindrome(char str[])
{
    int n = 0, i = 0;
    while (str[i] != '\0')
    {
        n++;
        i++;
    }
    int en = n - 1;
    int st = 0;
    while (st <= en)
    {
        if (str[st] == str[en])
        {
            st++;
            en--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{

    char str[100];
    cin >> str;

    if (palindrome(str))
    {
        cout << "True\n";
    }

    else
    {
        cout << "False\n";
    }
    return 0;
}