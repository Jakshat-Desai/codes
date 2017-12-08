#include <bits/stdc++.h>
using namespace std;
int bfs(vector<vector<int> > grap)
{
int vis[101];
    memset(vis,105,sizeof(int)*(101));
    queue<int> q;
    q.push(1);
    vis[1]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<grap[x].size();i++)
        {
            if(vis[grap[x][i]]>vis[x]+1)
            {
                vis[grap[x][i]]=vis[x]+1;
                q.push(grap[x][i]);
            }
        }
    }
    return vis[100];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int t;
    cin>>t;
    for(;t>0;t--)
    {
        vector<vector<int> > grap(101);
        int ladders;
        int ls[101];
        memset(ls,0,sizeof(int)*(101));
        cin>>ladders;
        for(int i=0;i<ladders;i++)
        {
            int a,b;
            cin>>a>>b;
            ls[a]=1;
            for(int i=1;i<=6;i++)
            {
                if(a-i>=1)
                {
                    grap[a-i].push_back(b);
                }
            }
        }
        int snakes;
        cin>>snakes;
        for(int i=0;i<snakes;i++)
        {
            int c,d;
            cin>>c>>d;
            ls[c]=1;
            for(int i=1;i<=6;i++)
            {
                if(c-i>=1)
                {
                    grap[c-i].push_back(d);
                }
            }
        }
        for(int i=1;i<=100;i++)
        {
            for(int j=1;j<=6;j++)
            {
                if(i+j<=100)
                if(!ls[i+j])
                {
                    grap[i].push_back(i+j);
                }
            }
        }
        int k=bfs(grap);
        if(k<100)
        cout<<k<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
