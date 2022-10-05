
/*It has a nice different approach see pdf (Lecture4-5. Patterns Coding Ninjas)

=>Using if-elese Method */

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int star = 1;
        while (star <= 2 * (n - i))
        {
            cout << "*";
            star++;
        }

        j = i;
        while (j >= 1)
        {
            cout << j;
            j--;
        }

        cout << endl;
        i--;
    }

    return 0;
}