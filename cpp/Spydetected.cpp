#include<iostream>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,t1=0,t2=0,c1=0,c2=0,i1,i2;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        t1=a[0];
        for(i=0;i<n;i++)
        {
            if(t1==a[i])
            {
                c1++;
                i1=i;
            }
            else
            {
                c2++;
                t2=a[i];
                i2=i;
            }
        }
        if(c1<c2)
        {
            cout<<i1+1<<endl;
        }
        else
        {
            cout<<i2+1<<endl;
        }
    }
}
