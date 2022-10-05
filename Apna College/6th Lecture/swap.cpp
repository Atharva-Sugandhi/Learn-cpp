#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int c;
    c = a + b;
    b = c - b;
    a = c - a;
    cout << a << " " << b;
    return;
}

int main()
{

    int a, b;
    cin >> a >> b;

    swap(a, b);

    return 0;
}