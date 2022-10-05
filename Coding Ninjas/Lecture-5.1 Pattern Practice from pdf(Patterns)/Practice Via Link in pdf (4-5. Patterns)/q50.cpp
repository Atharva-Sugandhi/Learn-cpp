#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    int f = 1, s = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << f << " ";
            int temp = f + s;
            f = s;
            s = temp;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}