#include <iostream>
using namespace std;

void replaceCharacter(char str[], char c1, char c2)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
        }
    }
    return;
}

int main()
{

    char str[100];
    cin >> str;

    char c1, c2;
    cin >> c1 >> c2;

    replaceCharacter(str, c1, c2);

    cout << str << endl;

    return 0;
}