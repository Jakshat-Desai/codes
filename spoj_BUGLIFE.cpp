#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<int> > grap, int n, int st, vector<int> vis)
{
    stack<int> s; s.push(st); vis[st-1]=1;
    while(!s.empty())
    {
        int x=s.top(); s.pop();
        for(int i=0;i<grap[x].size();i++)
        {
            if(vis[grap[x][i]-1]==0)
            {
                s.push(grap[x][i]);
                if(vis[x-1]>0) vis[grap[x][i]-1]=-1;
                else vis[grap[x][i]-1]=1;
            }
            else if(vis[grap[x][i]-1]==vis[x-1]) return false;
        }
    }
    for(int i=1;i<=n;i++)
        if(vis[i-1]==0)
            return dfs(grap,n,i,vis);
    return true;
}
int main()
{
   int t; cin>>t;
   for(int i=1;i<=t;i++)
   {
       int n,m; cin>>n>>m;
       vector<int> vis(n,0);
       vector<vector<int> > grap(n+1);
       for(int x=0;x<m;x++)
       {
           int a,b; cin>>a>>b;
           grap[a].push_back(b);
           grap[b].push_back(a);
           
       }
       cout<<"Scenario #"<<i<<":\n";
       if(dfs(grap,n,1,vis)){cout<<"No suspicious bugs found!\n";}
       else{cout<<"Suspicious bugs found!\n";}
   }
}
