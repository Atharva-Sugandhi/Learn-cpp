#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char A[100], B[100];
    cin.getline(A, 100);
    cin.getline(B, 100);

    int n = strcmp(A, B);

    if (n == 0)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}