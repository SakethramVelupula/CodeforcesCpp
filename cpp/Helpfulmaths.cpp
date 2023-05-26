#include <iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int i,one=0,two=0,three=0,n;
    n=s.length();
    for(i=0;i<n;i=i+2)
    {
        if(s[i]=='1')
        {
            one++;
        }
        if(s[i]=='2')
        {
            two++;
        }
        if(s[i]=='3')
        {
            three++;
        }
    }
    for(i=1;i<one;i++)
    {
        cout<<"1+";
    }
    if(one>0)
    {
        cout<<"1";
    }
    if(one>0 &&(two>0 || three>0))
    {
        cout<<"+";
    }
    for(i=0;i<two-1;i++)
    {
        cout<<"2+";
    }
    if(two>0)
    {
        cout<<"2";
    }
    if((two>0) && ( three>0))
    {
        cout<<"+";
    }
    for(i=0;i<three-1;i++)
    {
        cout<<"3+";
    }
    if(three>0)
    {
        cout<<"3";
    }
    return 0;
}