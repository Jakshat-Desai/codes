#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        int ans=-1;
        int n;cin>>n;n-=5;
        for(;n>0;n-=5)
        {
            if(n%3==0){ans=n;break;}
        }
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
