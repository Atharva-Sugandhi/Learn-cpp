#include <cstring>
#include <iostream>
using namespace std;

void printSubstrings(char str[])
{

    int n = strlen(str);
    int st = 0, en = st, i = 0;
    while (i < n)
    {
        for (st = i; st <= en; st++)
        {
            cout << str[st];
        }
        cout << endl;
        en++;
        if (en == n)
        {
            i++;
            en = i;
        }
    }
    return;
}

int main()
{

    char str[100];
    cin >> str;

    printSubstrings(str);

    return 0;
}