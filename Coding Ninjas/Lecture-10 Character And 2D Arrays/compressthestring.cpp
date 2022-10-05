#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string getCompressedString(string &str)
{
    int n = str.length();

    int count = 0, st = 0, en = 0;
    string ans;
    while(st<n)
    {
        if (str[st] == str[en])
        {
            count++;
            en++;
        }
        else
        {
            if (count > 1)
            {
                ans = ans + str[st] + to_string(count);
            }
            else
            {
                ans = ans + str[st];
            }
            count = 0;
            st = en;
        }
    }

    return ans;
}

int main()
{
    string str;
    cin >> str;

    str = getCompressedString(str);

    cout << str << endl;

    return 0;
}