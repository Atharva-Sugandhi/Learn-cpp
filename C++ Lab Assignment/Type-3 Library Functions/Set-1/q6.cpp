#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    cout << endl
         << "GUESS MY NUMBER GAME\n\n";

    do
    {
        cout << "Enter a guess between 1 to 100==";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "High\n";
        }
        else if (guess < num)
        {
            cout << "Low\n";
        }
        else
        {
            cout << "Wow! You got it RIGHT in " << tries << " guesses!\n";
        }
    } while (guess != num);

    return 0;
}