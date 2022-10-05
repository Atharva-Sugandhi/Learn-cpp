#include<cstring>
#include <iostream>
using namespace std;

int findSubstring(char str[], char sub[])
{   
    //Calculating no of terms in sub[]--
    int l=strlen(sub);

    int i,j;
    for(i=0,j=0;str[i]!='\0'&&sub[j]!='\0';i++){
        if(str[i]==sub[j]){
            j++;
        }
        else{
            j=0;
        }
    }
    int ans;
    if(j==l){
        return ans=(i-j+1);
    }
    else{
        return ans=-1;
    }
}

int main()
{
    char str[100], sub[100];
    cin >> str >> sub;

    int ans = findSubstring(str, sub);

    cout << ans << endl;

    return 0;
}