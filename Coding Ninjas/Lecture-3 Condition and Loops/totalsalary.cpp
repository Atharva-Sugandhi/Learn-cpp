#include <iostream>
using namespace std;

int main()
{

    int b_salary;
    char grade;
    cin >> b_salary >> grade;

    double t_salary;
    double hra = 0.2 * b_salary;
    double da = 0.5 * b_salary;
    double pf = 0.11 * b_salary;

    if (grade == 'A')
    {
        t_salary = b_salary + hra + da + 1700.00 - pf;
    }
    else if (grade == 'B')
    {
        t_salary = b_salary + hra + da + 1500.00 - pf;
    }
    else
    {
        t_salary = b_salary + hra + da + 1300.00 - pf;
    }

    int tsal = t_salary;

    if (t_salary - tsal >= 0.5)
    {
        int roundoff = t_salary + 1;
        cout << roundoff << endl;
    }
    else
    {
        int roundoff = t_salary;
        cout << roundoff << endl;
    }

    return 0;
}