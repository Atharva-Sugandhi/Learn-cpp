#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter 2 Numbers=  ";
    cin>>a>>b;
     
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"\nAfter Swapping Numbers=  "<<a<<" "<<b<<endl;

    return 0;
}