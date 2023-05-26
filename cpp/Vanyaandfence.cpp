#include<iostream>
using namespace std;
int main()
{
    int n,h,i;
    cin>>n>>h;
    int a[n],count=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            count++;
        }
        else
        {
            count=count+2;
        }
    }
    cout<<count<<endl;
}
