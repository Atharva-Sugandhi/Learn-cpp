#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int pv, cur;
    cin >> pv;

    int i = 1;
    bool decreasing = true;

    while (i < n)
    {
        cin >> cur;
        if (cur < pv)
        {
            if (decreasing == true)
            {
                decreasing = true;
                i++;
            }
            else
            {
                cout << "false" << endl;
                break;
            }
        }
        else if (cur > pv)
        {
            if (decreasing == true)
            {
                decreasing = false;
                i++;
            }
            else
            {
                decreasing = false;
                i++;
            }
        }
        else
        {
            cout << "false" << endl;
            break;
        }
        pv = cur;
    }

    if (i == n)
    {
        cout << "true" << endl;
    }

    return 0;
}