#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter A Number=";
    cin>>n;

    int i=1;
    
    while(i<=10){
        int m;
        m=n*i;
        cout<<n<<"*"<<i<<"="<<m<<endl;
        i++;
        
    }

    return 0;
}