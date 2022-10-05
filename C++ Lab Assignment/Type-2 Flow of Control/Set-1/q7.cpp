#include <iostream>
using namespace std;

int main()
{

    int Y;
    cout << "Enter a Year==";
    cin >> Y;

    (Y % 4 == 0) ? cout << "\nIt is a Leap Year\n" : cout << "\nIt is NOT a Leap Year\n";

    return 0;
}