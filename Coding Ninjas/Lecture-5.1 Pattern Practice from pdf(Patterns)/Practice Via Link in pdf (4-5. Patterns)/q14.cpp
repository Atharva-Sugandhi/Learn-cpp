#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i   =n;
    while (i>=1){
        int j=1;
        while(j<=2*i-1){
            cout<<j;
            j++;
        }
        cout<<endl;
        i--;
    }

    return 0;
}