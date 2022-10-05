#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter Two Number= ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter an Operation= ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;

    case '-':
        cout<<n1-n2<<endl;
        break;

    case '*':
        cout<<n1*n2<<endl;
        break;

    case '/':
        cout<<n1/n2<<endl;
        break;

    case '%':
        cout<<n1%n2<<endl;
        break;

    
    default:
        cout<<"Operation Not Found!\n";
        break;
    }


    return 0;
}