#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}

int main()
{

    int a, b;
    cout << "Enter 2 Numbers==";
    cin >> a >> b;

    cout << "Sum is==" << sum(a, b) << endl;

    return 0;
}