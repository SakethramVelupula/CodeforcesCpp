#include<iostream>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    int a[n],i;
    double per;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    per=sum/n;
    printf("%.10lf\n",per);
    return 0;
}