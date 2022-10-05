#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    char ch;
    cout << "Enter a Character=";

    ch = getchar();
    ch = toupper(ch);

    cout << ch;

    return 0;
}