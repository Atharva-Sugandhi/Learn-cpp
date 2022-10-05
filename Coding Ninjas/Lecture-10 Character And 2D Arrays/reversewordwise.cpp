#include <iostream>
using namespace std;

void reverseStringWordWise(char *str)
{
    //Counting terms

    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }

    //Reverse String

    int st = 0, en = n - 1;
    while (st < en)
    {
        int temp = str[st];
        str[st] = str[en];
        str[en] = temp;
        st++;
        en--;
    }

    //Reverse Word

    st = 0, en;
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

    reverseStringWordWise(str);

    cout << str << endl;

    return 0;
}