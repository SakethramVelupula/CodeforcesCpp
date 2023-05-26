#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=0,temp=0;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        k=k-a[i][0]+a[i][1];
        if(temp<k)
        {
            temp=k;
        }
    }
    cout<<temp<<endl;
    return 0;
}
