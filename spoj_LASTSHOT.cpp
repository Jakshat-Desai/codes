#include<bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int> > grap,int st, int n)
{
    stack<int> s;
    int z=1;
    s.push(st);
    vector<int> visited(n+1,0);
    visited[st]=1;
    while(!s.empty())
    {
        int x=s.top();
        s.pop();
        for(int i=0;i<grap[x].size();i++)
        {
            if(!visited[grap[x][i]])
            {
                z++;
                visited[grap[x][i]]=1;
                s.push(grap[x][i]);
            }
        }
    }
    return z;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==0)
    {cout<<0;return 0;}
    vector<vector<int> > grap(n+1);
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        grap[a].push_back(b);
    }
    int maxim=0,x=0;
    for(int i=1;i<=n;i++)
    {
        x=dfs(grap,i,n);
        maxim=max(x,maxim);
    }
    cout<<maxim;
}
