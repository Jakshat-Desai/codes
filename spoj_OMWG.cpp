#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for(;t>0;t--)
    {
        int n,m; cin>>n>>m;
        cout<<n*(m-1)+m*(n-1)<<"\n";
    }
}
