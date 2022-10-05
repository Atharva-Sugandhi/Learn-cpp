#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter 3 nos.= ";
    cin >> a >> b >> c;

    int L;

    L = (a > b && a > c) ? a : (b > c) ? b
                                       : c;
    cout << "Largest no. is= " << L;

    return 0;
}