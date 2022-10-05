#include <iostream>
using namespace std;

void removeConsecutiveDublicates(char str[])
{
    char ch = '0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (ch != str[i])
        {
            ch = str[i];
        }
        else
        {
            int j = i;
            while (str[j] == ch)
            {
                str[j] = str[j + 1];
                j++;
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

    removeConsecutiveDublicates(str);

    cout << str << endl;

    return 0;
}