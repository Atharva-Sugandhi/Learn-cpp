#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char start = 'a';
        while (j <= n)
        {
            cout << start;
            start++;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}