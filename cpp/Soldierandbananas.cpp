#include<iostream>
using namespace std;
int main()
{
    int k,w,i,sum=0;
    long int n;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if(sum-n>0)
    {
        cout<<sum-n<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
