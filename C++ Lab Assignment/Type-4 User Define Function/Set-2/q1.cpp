#include <iostream>
using namespace std;

void showchoices()
{

    cout << "MENU" << endl;
    cout << "1.Add" << endl;
    cout << "2.Difference" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << "5.Exit" << endl;
    cout << "Enter Your Choice :";

    return;
}

float Sum(float a, float b)
{
    return a + b;
}

float Diff(float a, float b)
{
    return a - b;
}

float Mul(float a, float b)
{
    return a * b;
}

float Div(float a, float b)
{
    return a / b;
}

int main()
{

    float x, y;

    int choice;

    do
    {
        showchoices();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter 2 Numbers==";
            cin >> x >> y;
            cout << "Sum==" << Sum(x, y) << endl;
            break;

        case 2:
            cout << "Enter 2 Numbers==";
            cin >> x >> y;
            cout << "Difference==" << Diff(x, y) << endl;
            break;

        case 3:
            cout << "Enter 2 Numbers==";
            cin >> x >> y;
            cout << "Multiplication==" << Mul(x, y) << endl;
            break;

        case 4:
            cout << "Enter 2 Numbers==";
            cin >> x >> y;
            cout << "Quotient==" << Div(x, y) << endl;
            break;

        case 5:

            break;

        default:
            cout << "Input invalid\n";
            break;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}