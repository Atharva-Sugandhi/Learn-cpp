#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter Angles of a Triangle==";
    cin >> a >> b >> c;

    (a + b + c == 180) ? cout << "\nTriangle is Valid\n" : cout << "\nTriangle is Not Valid\n";

    return 0;
}