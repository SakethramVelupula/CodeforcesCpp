#include<iostream>
using namespace std;
int main()
{
    int t,a,b,count=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a+2<=b)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}