#include<bits/stdc++.h>
using namespace std;
int exgcd(int a, int b)
{
    if(!b)
    {
        return a;
    }
    int g=exgcd(b,a%b);
    return g;
}
int main()
{
    int t,l;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<"Case "<<l<<": ";
        int g=exgcd(a,b);
        if(c%g==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
