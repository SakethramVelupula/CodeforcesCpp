#include <iostream>
using namespace std;
int main() {
    int t,i,sum=0;
    cin>>t;
    while(t--)
        {
        int h,m,temp=0;
        cin>>h>>m;
        if(h>0 && h<24 && m>0 && m<60)
        {
            temp=(24-h)*60;
            temp=temp-m;
        }
        if(h==0 && m>0)
        {
            temp=(23*60)+(60-m);
        }
        if(h>0 && m==0)
        {
            temp=(24-h)*60;
        }
        cout<<temp<<endl;
    }
    return 0;
}
