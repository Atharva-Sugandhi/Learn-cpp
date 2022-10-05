#include <iostream>
using namespace std;

int main()
{

    int CP, SP;
    cout << "Enter a Cost Price==";
    cin >> CP;

    cout << "\nEnter a Selling Price==";
    cin >> SP;

    if (SP > CP)
    {

        cout << "Profit==" << SP - CP << " :) " << endl;
    }
    else
    {
        cout << "Loss==" << CP - SP << " :( " << endl;
    }

    return 0;
}
