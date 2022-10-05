#include <iostream>
using namespace std;

int countString(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    cin.getline(str, 100);

    int n = countString(str);
    cout << n << endl;

    return 0;
}