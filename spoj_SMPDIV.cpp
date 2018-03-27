#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int n,x,y;
    for(;t>0;t--)
    {
        cin>>n>>x>>y;
        for(int i=x;i<=n;i+=x)
            {cout<<i<<" ";
            if((i+x)%y==0)
            i+=x;}
        cout<<"\n";
    }
}
