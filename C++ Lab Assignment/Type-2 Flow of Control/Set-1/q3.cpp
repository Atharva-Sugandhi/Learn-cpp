#include <iostream>
using namespace std;

int main()
{

    int q, p, T;
    cout << "Enter Quantity==";
    cin >> q;
    cout << "\nEnter Price==";
    cin >> p;

    T = q * p;

    cout << "\nTotal Expances==" << T << endl;

    if (T > 5000)
    {
        int D;
        D = T - T * 0.1;
        cout << "Amount After Discount==" << D << endl;
    }
    else
    {
        cout << "Minimum 5000 rupees for discount :(" << endl;
    }

    return 0;
}