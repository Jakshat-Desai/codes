#include<bits/stdc++.h>
using namespace std;
int count_;
vector<vector<int> > grap(100001);
int vis[100001];
void dfs(int a)
{
  if(vis[a])
  {
    return;
  }
  vis[a]=1;
  for(int i=0;i<grap[a].size();i++)
  {
  if(vis[grap[a][i]]==0)
  {
	dfs(grap[a][i]);
  }
  }
}
int main()
{
ios_base::sync_with_stdio(NULL);
cin.tie(NULL);
int t;
cin>>t;
int n,e,a,b;
for(;t>0;t--)
{
  count_=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    grap[i].clear();
  }
  cin>>e;
  for(int i=0;i<e;i++)
  {
    cin>>a>>b;
    grap[a].push_back(b);
    grap[b].push_back(a);
  }
  memset(vis,0,sizeof(int)*(n));
  for(int i=0;i<n;i++)
  {
  if(!vis[i])
  {
    dfs(i);
    count_++;
  }
  }
  cout<<count_<<"\n";
}
}
