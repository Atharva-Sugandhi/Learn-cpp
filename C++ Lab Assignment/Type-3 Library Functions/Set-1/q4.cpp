#include <bits/stdc++.h> //HEDER FILE TO INCLUDE ALL FILES
using namespace std;

int main()
{

    int n;
    srand(time(0)); // FOR CHANGE IN RANDOMNESS(MAY BE)

    n = rand() % 91 + 10; // 91 BECAUSE WE NEED MIN 11 ;)
    cout << "Randomly Selected Number is=" << n;

    return 0;
}