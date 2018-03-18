#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,e,t,m;
    cin>>n>>e>>t>>m;
    long long int grap[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i==j)grap[i][j]=0;
            else
            grap[i][j]=INT_MAX;
        }
    int u,v,k;
    //cost matrix
    for(int i=0;i<m;i++){cin>>u>>v>>k;grap[u-1][v-1]=k;}
    //floyd warshall
    for(int k=1;k<n;k++)
      for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            grap[i][j]=min(grap[i][j],grap[i][k]+grap[k][j]);
    //
    int sum=0;
    for(int i=0;i<n;i++) if(grap[i][e-1]<=t) sum++;
    cout<<sum;
}
