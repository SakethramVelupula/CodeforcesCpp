#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,temp,i,sum=0;
        cin>>x>>y>>n;
        temp=n-y;
        i=temp/x;
        sum=(i*x)+y;
        cout<<sum<<endl;
    }
}
