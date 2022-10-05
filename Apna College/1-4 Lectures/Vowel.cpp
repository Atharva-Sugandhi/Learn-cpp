#include <iostream>
using namespace std;

int main()
{

    char a;
    cout << "Enter an Alphabet= ";
    cin >> a;

    switch (a)
    {
    case 'a':
        cout << "It is an Vowel.\n";
        break;

    case 'e':
        cout << "It is an Vowel.\n";
        break;

    case 'i':
        cout << "It is an Vowel.\n";
        break;

    case 'o':
        cout << "It is an Vowel.\n";
        break;

    case 'u':
        cout << "It is an Vowel.\n";
        break;

    default:
        cout << "It is a Consonant.\n";
        break;
    }
    return 0;
}