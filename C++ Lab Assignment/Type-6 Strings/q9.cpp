#include <iostream>
using namespace std;

void convertLowercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 122 && str[i] >= 97)
        {
            int k = str[i] - 97;
            str[i] = 65 + k;
        }
    }
    return;
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    convertLowercase(str);

    cout << str << endl;

    return 0;
}