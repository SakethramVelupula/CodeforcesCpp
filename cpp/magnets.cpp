#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,i=0,k=0;
    string s,a;
    cin>>n;
    if(n==1)
    {
        k=1;
    }
    else if(n==2)
    {
        cin>>s>>a;
        if(s==a)
        {
            k=1;
        }
        else
        {
            k=2;
        }
    }
    else
    {
        cin>>s>>a;
        if(s==a)
        {
            k=1;
        }
        else
        {
           k=2;
        }
        n=n-2;
        while(n--)
        {
            cin>>s;
            if(a==s)
            {
                a=s;
            }
            else
            {
                k++;
                a=s;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}