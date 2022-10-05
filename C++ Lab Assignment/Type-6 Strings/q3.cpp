#include <iostream>
using namespace std;

int countWord(char str[])
{

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return (count + 1);
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    int ans = countWord(str);
    cout << ans << endl;

    return 0;
}