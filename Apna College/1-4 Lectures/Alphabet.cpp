#include <iostream>
using namespace std;

int main()
{
    char A;
    int isLowercaseVowel, isUppercaseVowel;
    cout << "enter an Alphabet ";
    cin >> A;

    isLowercaseVowel = (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u');
    isUppercaseVowel = (A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
    {
        cout << "is a Vowel\n";
    }
    else
    {
        cout << "is a Constant\n";
    }

    return 0;
}