#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Max="<<a<<endl;
        }
        else{
            cout<<"Max="<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Max="<<b<<endl;
        }
        else{
            cout<<"Max="<<c<<endl;
        }
    }
    return 0;
}