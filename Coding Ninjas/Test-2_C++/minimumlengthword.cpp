#include <iostream>
#include <cstring>
using namespace std;

void minimumLengthWord(char str[])
{
    int n = strlen(str);
    char temp[80];
    int st = 0, en = 0, count = 0;
    int l_min = 100;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ' && i != (n - 1))
        {
            count++;
        }

        else if (str[i] == ' ')
        {
            if (count < l_min)
            {
                int j;
                for (j = 0; j < count; j++)
                {
                    temp[j] = str[en];
                    en++;
                }
                temp[j] = '\0';
                l_min = count;
            }
            st = i + 1;
            en = st;
            count = 0;
        }

        else if (i == (n - 1))
        {
            count++;
            if (count < l_min)
            {
                int j;
                for (j = 0; j < count; j++)
                {
                    temp[j] = str[en];
                    en++;
                }
                temp[j] = '\0';
            }
        }
    }

    for (int i = 0; temp[i] != '\0'; i++)
    {
        cout << temp[i];
    }
    cout << endl;

    return;
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    minimumLengthWord(str);

    return 0;
}