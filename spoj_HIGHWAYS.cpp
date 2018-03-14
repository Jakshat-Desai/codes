#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<vector<pii> > vpii;
int main()
{
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        //taking inputs
        int n,m,strt,e;
        cin>>n>>m>>strt>>e;
        //creating graph
        vpii grap(n+1);
        vi dis;
        dis.assign(n+1,INT_MAX);
        for(int i=0;i<m;i++)
        {
            int x,y,c;
            cin>>x>>y>>c;
            grap[x].push_back({y,c});
            grap[y].push_back({x,c});
        }
        //
        //
        //creating extra structures
        set<pii> s;
        s.insert({0,strt});
        dis[strt]=0;
        //dijkstra
        while(!s.empty())
        {
            int x=s.begin()->second;
            s.erase(s.begin());
            for(int i=0;i<grap[x].size();i++)
            {
                int u,w;
                u=grap[x][i].first;
                w=grap[x][i].second;
                if(dis[u]>dis[x]+w)
                {
                    if(s.find({dis[u],u})!=s.end())
                        s.erase({dis[u],u});
                    dis[u]=dis[x]+w;
                    s.insert({dis[u],u});
                }
            }
        }
    if(dis[e]!=INT_MAX)
     cout<<dis[e]<<"\n";
     else
        cout<<"NONE\n";
    }
}
