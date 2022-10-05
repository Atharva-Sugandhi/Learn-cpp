#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter A Character= ";
    cin >> ch;

    cout << "ASCII Equivalent is= " << static_cast<int>(ch); /*IMPORTANT CODE*/

    return 0;
}