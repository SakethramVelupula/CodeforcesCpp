#include<iostream>
using namespace std;
int main()
{
    int t,a[10000],i,count=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            count==0;
        }
        else
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}