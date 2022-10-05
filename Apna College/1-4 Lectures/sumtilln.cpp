#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int Sum=0;
    for(int counter= 1;counter<=a;counter++){
        Sum=Sum+counter;
    }
    cout<<Sum<<endl;
    return 0;
}