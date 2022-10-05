#include<iostream>
using namespace std;

int main(){

    int F;
    cout<<"Enter Temp in Farenheit=";
    cin>>F;
    
    int C;
    C=5*(F-32)/9;

    cout<<"Temp in Celcius="<<C<<endl;

    return 0;
}