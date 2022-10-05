#include <iostream>
using namespace std;

//Shortest approach--

void trimSpaces(char *str)
{
    int n = 0;
    for (int i = 0; str[i] != '0'; i++)
    {
        if (str[i] != 0)
        {
            n++;
        }
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        else
        {
            continue;
        }
    }
    return;
}

//Long Method--

// void trimSpaces(char *str)
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ')
//         {
//             for (int j = i; str[j] != '\0'; j++)
//             {
//                 str[j] = str[j + 1];
//             }
//             i--;
//         }
//     }
//     return;
// }

//Too long Method--

// void trimSpaces(char *str)
// {
//     char temp[100];
//     int count = 0;
//     for (int i = 0; i != '\0'; i++)
//     {
//         if (str[i] == ' ')
//         {
//             continue;
//         }
//         else
//         {
//             temp[count] = str[i];
//             count++;
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         str[i] = temp[i];
//     }
//     return;
// }

int main()
{

    char str[100];
    cin.getline(str, 100);

    trimSpaces(str);

    cout << str << endl;

    return 0;
}