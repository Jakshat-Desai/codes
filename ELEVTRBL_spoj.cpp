#include<bits/stdc++.h>
using namespace std;
int bfs(int f, int a, int b, int u, int d)
{
  int vis[f+1];
  memset(vis,-1, sizeof(int)*(f+1));
  queue<int> q;
  q.push(a);
  vis[a]++;
  while(!q.empty())
  {
    int x=q.front();
    q.pop();
    if(x+u<=f)
    {
      if(vis[x+u]==-1)
      {
        q.push(x+u);
        vis[x+u]=vis[x]+1;
      }
    }
    if(x-d>0)
    {
      if(vis[x-d]==-1)
      {
        q.push(x-d);
        vis[x-d]=vis[x]+1;
      }
    }
  }
  return vis[b];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int f,s,g,u,d;
cin>>f>>s>>g>>u>>d;
int k=bfs(f,s,g,u,d);
if(k!=-1)
{
cout<<k<<"\n";
}
else
{
cout<<"use the stairs\n";
}
}
