#include <iostream>
using namespace std;
int palindrome(int);
int main() {
    int t,n,j,k,i;
    cout<<"Enter t value:"<<endl;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Enter n value:"<<endl;
        cin>>n;
        j=n;
        while(j++)
        {
        k=palindrome(j);
        if(k==1)
        {
            cout<<j<<endl;
            break;
        }
        }
    }
    return 0;
}
int palindrome(int n)
{
    int rem,rev=0,temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}