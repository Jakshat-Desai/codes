#include<bits/stdc++.h>
using namespace std;
long long int sum=0;
void count(int m, int n, vector<pair<int,int > > gfs, int i, vector<vector<int> > memo)
{
    if(i==0)
    {if(gfs[i].first<=n && gfs[i].second>=n)
        {sum++;return;}
        return;}
    for(int k=gfs[i].first;k<=gfs[i].second;k++)
    {
        int x=sum;
        if(n-k>=0)
            {
        if(memo[n-k][i-1]!=0)
        count(m,n-k,gfs,i-1,memo);
        if(x!=sum)
        memo[n-k][i]=0;
            }

    }
}
int main()
{
    while(1)
    {
    int n,m;cin>>m>>n;
    if(m==0 && n==0)return 0;
    vector<vector<int> > memo(n,vector<int>(m,1));
    vector<pair<int,int> > gfs(m);
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        gfs[i]={x,y};
    }
    count(m,n,gfs,m-1,memo);
    cout<<sum<<"\n";
    }
}
