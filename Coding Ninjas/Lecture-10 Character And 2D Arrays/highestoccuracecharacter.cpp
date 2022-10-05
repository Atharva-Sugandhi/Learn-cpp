#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char str[])
{
    int temp[256];
    int n = strlen(str);
    for (int i = 0; i < 256; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        temp[str[i]]++;
    }

    int ans = 0;
    char output;
    for (int i = 0; i < 256; i++)
    {
        if (temp[i] > ans)
        {
            ans = temp[i];
            output = i;
        }
    }
    return output;
}

int main()
{
    char str[100];
    cin >> str;

    char ans = highestOccurringChar(str);

    cout << ans << endl;

    return 0;
}