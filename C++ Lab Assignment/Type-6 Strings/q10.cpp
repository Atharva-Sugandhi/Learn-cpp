#include <iostream>
using namespace std;

void convertUppercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 90 && str[i] >= 65)
        {
            int k = str[i] - 65;
            str[i] = 97 + k;
        }
    }
    return;
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    convertUppercase(str);

    cout << str << endl;

    return 0;
}