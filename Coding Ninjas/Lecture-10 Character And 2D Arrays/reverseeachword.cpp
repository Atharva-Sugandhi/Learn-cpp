#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char str[])
{
    int st = 0, en;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            en = i - 1;
            while (st < en)
            {
                int temp = str[st];
                str[st] = str[en];
                str[en] = temp;
                st++;
                en--;
            }
            st = i + 1;
        }

        else if (i == n - 1)
        {
            en = i;
            while (st < en)
            {
                int temp = str[st];
                str[st] = str[en];
                str[en] = temp;
                st++;
                en--;
            }
        }
    }
    return;
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    reverseEachWord(str);

    cout << str << endl;

    return 0;
}