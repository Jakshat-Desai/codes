#include<bits/stdc++.h>
using namespace std;
struct node
{
    int v;
    int weight;
};
int extract_min(int dis[], bool vis[], int n)
{
    int c=100002;
    int k=-1;
    for(int i=1;i<=n;i++)
    {
        if(c>dis[i] && !vis[i])
        {
            c=dis[i];
            k=i;
        }
    }
    return k;
}
int main()
{
int n,m,strt;
cin>>n>>m;
vector<node> grap[n+1];
int dis[n+1];
bool vis[n+1];
for(int i=0;i<n+1;i++)
{
    dis[i]=100001;
}
memset(vis,false,sizeof(bool)*(n+1));
for(int i=0;i<m;i++)
{
    int a,b,c;
    cin>>a>>b>>c;
    node k;
    k.v=b;
    k.weight=c;
    grap[a].push_back(k);
    k.v=a;
    grap[b].push_back(k);
}
    cin>>strt;
   dis[strt]=0;
    int minwt=0;
    for(int i=0;i<n;i++)
    {
        int s=extract_min(dis,vis,n);
        minwt+=dis[s];
        vis[s]=true;
        for(int j=0;j<grap[s].size();j++)
        {
            if(!vis[grap[s][j].v])
                if(dis[grap[s][j].v]>grap[s][j].weight)
                {
                    dis[grap[s][j].v]=grap[s][j].weight;
                }
        }
    }
    cout<<minwt;
}
