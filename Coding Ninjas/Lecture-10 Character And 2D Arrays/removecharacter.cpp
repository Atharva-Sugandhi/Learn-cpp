#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrenceOfChar(char str[], char ch)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch)
        {
            for (int j = i; j < n; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    return;
}

int main()
{
    char str[100];
    cin >> str;

    char ch;
    cin >> ch;

    removeAllOccurrenceOfChar(str, ch);

    cout << str << endl;

    return 0;
}