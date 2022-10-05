#include <iostream>
using namespace std;

int main()
{
    int C;
    cout << "Enter Total Calls this Month==";
    cin >> C;

    if (C <= 100)
    {
        cout << "\nBill for this Month==Rs200\n";
    }
    else if (C > 100 && C <= 0150)
    {
        C = C - 100;
        cout << "\nBill for this Month==Rs" << 200 + C * 0.6 << endl;
    }
    else if (C > 150 && C <= 200)
    {
        C = C - 150;
        cout << "\nBill for this Month==Rs" << 200 + 30 + C * 0.5 << endl;
    }
    else
    {
        C = C - 200;
        cout << "\nBill for this Month==Rs" << 200 + 30 + 25 + C * 0.4 << endl;
    }

    return 0;
}