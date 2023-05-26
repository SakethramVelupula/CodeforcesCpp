#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,x,y;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            x=a/b;
            y=(x+1)*b;
            cout<<y-a<<endl;
        }
    }
    return 0;
}