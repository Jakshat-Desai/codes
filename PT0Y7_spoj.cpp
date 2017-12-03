#include<bits/stdc++.h>
using namespace std;
int flag;
int dfs(vector<vector<int> > grap,int n, int u)
{
    stack<int> s;
    s.push(u);
    int vis[n];
    memset(vis,0,sizeof(int)*n);
    vis[u]=1;
    int k=0;
    while(!s.empty())
    {
        int x=s.top();
        k++;
        s.pop();
        for(int i=0;i<grap[x].size();i++)
        {
            if(vis[grap[x][i]]==0)
            {
                vis[grap[x][i]]=1;
                s.push(grap[x][i]);
            }
            else
            {
                return 0;
            }
        }
    }
    if(k==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,m,i,u=1,v;
    cin>>n>>m;
    vector<vector<int> > grap(n);
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        grap[u-1].push_back(v-1);
    }
    if(m<n-1)
    {
        cout<<"NO\n";
        return 0;
    }
    if(dfs(grap,n,0))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
