#include <iostream>
using namespace std;

void merge(char A[], char B[], char C[])
{
    int k = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        C[k] = A[i];
        k++;
    }
    for (int i = 0; B[i] != '\0'; i++)
    {
        C[k] = B[i];
        k++;
    }
    C[k] = '\0';

    return;
}

int main()
{
    char A[100], B[100], C[200];
    cin >> A >> B;

    merge(A, B, C);

    cout << C << endl;

    return 0;
}