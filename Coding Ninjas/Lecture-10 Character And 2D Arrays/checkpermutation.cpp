#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char str1[], char str2[])
{
    //Recommended approach(frequency array)--

    int arr[256];
    for (int i = 0; i < 256; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        arr[str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        arr[str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;

    //Works fine but time limit exceeding--

    // int a = strlen(str1), b = strlen(str2);
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         if (str1[i] == str2[j])
    //         {
    //             str2[j] = 0;
    //             str1[i] = 0;
    //             break;
    //         }
    //     }
    //     if (str1[i] != 0)
    //     {
    //         return false;
    //     }
    // }
    // return true;
}

int main()
{
    char str1[100], str2[100];
    cin >> str1 >> str2;

    if (isPermutation(str1, str2))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}