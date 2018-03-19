#include<bits/stdc++.h>
using namespace std;
typedef vector<vector<int> > vvi;
typedef vector<int> vi;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t,n,m;cin>>t;
    for(;t>0;t--)
    {
        cin>>n>>m; vvi grap(n+1);
        for(int i=0;i<m;i++)
        {
            int u,v; cin>>u>>v;
            grap[u].push_back(v); grap[v].push_back(u);
        }
        vi dist(n+1,INT_MAX); dist[1]=0;
        set<pair<int,int> > s; s.insert({dist[1],1});
        while(!s.empty())
        {
            int x=s.begin()->second;
            s.erase({dist[x],x});
            for(int i=0;i<grap[x].size();i++)
            {
                int u=grap[x][i];
                if(dist[u]>=dist[x]+1){
                    if(s.find({dist[u],u})!=s.end())
                        s.erase({dist[u],u});
                    dist[u]=dist[x]+1;
                    s.insert({dist[u],u});}
            }
        }
        cout<<dist[n]<<"\n";
    }
}
