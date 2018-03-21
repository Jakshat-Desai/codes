#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        int n,m; cin>>n>>m;vector<vector<long long int> > arr(n);
        for(int i=0;i<n;i++) for(int j=0;j<m;j++){int k;cin>>k;arr[i].push_back(k);}
        long long int maxim=0;
        for(int i=n-2;i>=0;i--) for(int j=0;j<m;j++)
            {
                if(j==0) arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);
                else if(j==m-1) arr[i][j]+=max(arr[i+1][j-1],arr[i+1][j]);
                else arr[i][j]+=max(arr[i+1][j],max(arr[i+1][j+1],arr[i+1][j-1]));
            }
        for(int i=0;i<m;i++)maxim=max(maxim,arr[0][i]);
        cout<<maxim<<"\n";
    }
}
