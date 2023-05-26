#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=1;
    for(i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            if(j==a[k])
            {
                cout<<k+1<<" ";
                j++;
            }
        }
    }
}
