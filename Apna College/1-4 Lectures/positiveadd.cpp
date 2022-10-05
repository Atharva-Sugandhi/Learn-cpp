#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter A Number=";
    cin>>n;

    int i=0;
    while(n>=0){
        i+=n;
        
        cout<<"Enter A Number=";
        cin>>n;
    
    }
    cout<<"\nThe Sum is="<<i<<endl;

    return 0;
}