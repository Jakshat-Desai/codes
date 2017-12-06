#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int> > grap, int a, int vis[])
{
  queue<int> q;
  q.push(a);
  vis[a]=0;
  int x;
  while(!q.empty())
  {
    x=q.front();
    q.pop();
    for(int i=0;i<grap[x].size();i++)
    {
      if(vis[grap[x][i]]==-1)
      {
        vis[grap[x][i]]=vis[x]+1;
        q.push(grap[x][i]);
      }
    }
  }
  return x;
}
int main()
{
int m,u,v;
cin>>m;
vector<vector<int> > grap(m);
int vis[m];
memset(vis,-1,sizeof(int)*m);
for(int i=0;i<m-1;i++)
{
  cin>>u>>v;
  grap[u-1].push_back(v-1);
  grap[v-1].push_back(u-1);
}
int a=bfs(grap,0,vis);
int a_lvl=vis[a];
memset(vis,-1,sizeof(int)*m);
int b=bfs(grap,a,vis);
int b_lvl=vis[b];
cout<<b_lvl<<"\n";
}
