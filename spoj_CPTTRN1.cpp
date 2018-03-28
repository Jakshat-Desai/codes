#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m;cin>>n>>m;
        for(int x=0;x<n;x++)
            {for(int y=0;y<m;y++){
                if((x+y+1)%2)cout<<"*";
                    else cout<<".";}
        cout<<"\n";}
        cout<<"\n";
    }
}
