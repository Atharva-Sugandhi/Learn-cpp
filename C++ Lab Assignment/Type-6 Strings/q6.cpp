#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[])
{
    int n = strlen(str);
    int st = 0, en = n - 1;
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

    if (checkPalindrome(str))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}