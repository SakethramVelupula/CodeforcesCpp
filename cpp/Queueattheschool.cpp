#include<iostream>
using namespace std;
int main()
{
    int n,a,i;
    string s;
    char c;
    cin>>n>>a;
    cin>>s;
    while(a--)
    {
        for(i=0;s[i]!='\\0';i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
