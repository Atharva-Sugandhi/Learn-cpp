#include <iostream>
using namespace std;

//This approach is wrong when no. is too large becose int max digit limit is 9 but due to soring variable int t it is exceeding limit.

void sumOfTwoArrays(int a[], int n, int b[], int m, int *c)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        f = f * 10 + a[i];
    }

    int s = 0;
    for (int i = 0; i < m; i++)
    {
        s = s * 10 + b[i];
    }

    int t = f + s;
    int o = max(n, m) + 1;

    for (int i = o - 1; i >= 0; i--)
    {
        int lastdigit = t % 10;
        c[i] = lastdigit;
        t /= 10;
    }

    return;
}

//Coding Ninjas Solution---         CORRECT METHOD  :))

/*void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int sum=0;
    int carry=0;
    int outsize;
    outsize=1+max(size1,size2);
    
    while(size1>=0 && size2>=0)
    {  
        sum=input1[size1--]+input2[size2--]+carry;
        output[outsize--]=sum%10;
         carry=sum/10;
        
    }  
    if(size2<0)
    { while(size1>=0)
    {
         sum=input1[size1--]+carry;
        carry=sum/10;
        output[outsize--]=sum%10;
    }
     output[0]=carry;
    }
     else if (size1<0)
    { while(size2>=0)
       {
         sum=input1[size2--]+carry;
        carry=sum/10;
        output[outsize--]=sum%10;
       
        }
     output[0]=carry;
    }
}*/

int main()
{
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[100];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c[200];
    sumOfTwoArrays(a, n, b, m, c);

    int o = max(n, m) + 1;
    for (int i = 0; i < o; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}