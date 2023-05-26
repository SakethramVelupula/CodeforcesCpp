#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long n,m,a;
    cin>>n>>m>>a;
    unsigned long long k=ceil((double)m/a)*ceil((double)n/a);
    cout<<k;
    return 0;
}
