#include <iostream>
using namespace std;

int main()
{

    int n1;
    cout << "\nEnter a Number= ";
    cin >> n1;

    (n1 % 2 == 0) ? cout << "Number is Even" : cout << "Number is Odd";

    return 0;
}