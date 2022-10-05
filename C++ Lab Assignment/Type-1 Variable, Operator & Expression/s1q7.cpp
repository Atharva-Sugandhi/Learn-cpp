#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter 2 Values  ";
    cin >> a >> b;

    c = a;
    a = b;
    b = c;

    cout << "After Swapping Values  " << a << " " << b << endl;

    return 0;
}