#include <iostream>
using namespace std;

int main()
{
    int S1, S2, S3;
    cout << "\nS1=";
    cin >> S1;
    cout << "\nS2=";
    cin >> S2;
    cout << "\nS3=";
    cin >> S3;

    if (S1 == S2 && S2 == S3)
    {
        cout << "Equilateral Triangle\n";
    }
    else
    {
        if (S1 == S2 || S2 == S3 || S3 == S1)
        {
            cout << "Isosceles Triangle\n";
        }
        else
        {
            cout << "Scalene Triangle\n";
        }
    }
    return 0;
}