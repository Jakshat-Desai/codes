#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int u;
    int v;
    int weight;
};
int par(int vis[], int a)
{
   while(vis[a]!=a)
   {
       a=vis[a];
   }
    return a;
}
void uni(int vis[], int a, int b)
{
    int x=par(vis,a);
    int y=par(vis,b);
    if(x<y)
    {
        vis[y]=x;
    }
    else
    {
        vis[x]=y;
    }
}
bool compare(edge a, edge b)
{
    if(a.weight<=b.weight)
    {
        return true;
    }
    return false;
}
int main()
{
int n,m;
cin>>n>>m;
int vis[n+1];
edge e[m];
for(int i=0;i<=n;i++)
{
    vis[i]=i;
}
for(int i=0;i<m;i++)
{
    int a,b,c;
    cin>>a>>b>>c;
    e[i].u=a;
    e[i].v=b;
    e[i].weight=c;
}
    sort(e,e+m,compare);
    int wt=0, v=0;
    for(int i=0;i<m;i++)
    {
        if(v==n-1)
            break;
        if(par(vis,e[i].u)!=par(vis,e[i].v))
        {
            uni(vis,e[i].u,e[i].v);
            wt+=e[i].weight;
            v++;
        }
    }
    cout<<wt;
}
