#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter a Character== ";
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "Character is Capital Letter" << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "Character is Small Letter" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "Character is a Digit" << endl;
    }
    else if (ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
    {
        cout << "Character is Special Character" << endl;
    }

    return 0;
}