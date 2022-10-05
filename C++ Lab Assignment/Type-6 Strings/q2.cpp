#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void reverseString(char str[])
{
    int n = strlen(str);
    int st = 0, en = n - 1;
    while (st < en)
    {
        char temp = str[en];
        str[en] = str[st];
        str[st] = temp;
        st++;
        en--;
    }
    return;
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    reverseString(str);

    cout << str << endl;
    return 0;
}