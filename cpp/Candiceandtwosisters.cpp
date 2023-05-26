#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,count=0;
        cin>>n;
        a=n-1;
        b=1;
        while(a>b)
        {
            count++;
            a--;
            b++;
        }
        cout<<count<<endl;
    }
    return 0;
}