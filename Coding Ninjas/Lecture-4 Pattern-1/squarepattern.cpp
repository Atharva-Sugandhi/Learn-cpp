#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int row = 1;
    while (row <= N)
    {
        int col = 1;
        while (col <= N)
        {
            cout << N;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}