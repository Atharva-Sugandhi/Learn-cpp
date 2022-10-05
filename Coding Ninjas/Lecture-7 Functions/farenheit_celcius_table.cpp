#include <iostream>
using namespace std;

void printTable(int S, int E, int W)
{
    int i = S;
    while (i <= E)
    {

        int C = (5 * (i - 32)) / 9;
        cout << i << " " << C << endl;
        i = i + W;
    }
    return;
}

int main()
{

    int S, E, W;
    cin >> S >> E >> W;
    printTable(S, E, W);
    return 0;
}