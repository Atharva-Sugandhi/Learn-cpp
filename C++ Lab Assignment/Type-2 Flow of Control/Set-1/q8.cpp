#include <iostream>
using namespace std;

int main()
{

    int S;
    cout << "Enter a Basic Salary==";
    cin >> S;

    int G;
    G = (S < 1500) ? S + S * 0.1 + S * 0.9 : S + 500 + S * 0.98;

    cout << "Gross Salary==" << G << endl;

    return 0;
}