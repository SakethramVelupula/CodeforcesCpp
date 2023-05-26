#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        int temp=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<temp)
            {
                temp=a[i];
            }
        }
        cout<<sum-(n*temp)<<endl;
    }
}