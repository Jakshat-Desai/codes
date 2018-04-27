#include<bits/stdc++.h>
using namespace std;
int TSP(vector<vector<int> > arr, set<int> s, int i)
{
    if(s.empty())return arr[i][0];
    set<int>::iterator it;
    int x=INT_MAX;
    for(it=s.begin();it!=s.end();it++)
    {
        int k=*it;
        s.erase(k);
        x=min(x,arr[i][k]+TSP(arr,s,k));
        s.insert(k);
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    for(;t>0;t--)
    {
        int n; cin>>n;
        vector<vector<int> > arr(n+1,vector<int>(n+1,0)); for(int i=0;i<=n;i++)for(int j=0;j<=n;j++)if(i!=j)cin>>arr[i][j];
        set<int> s; for(int i=1;i<=n;i++)s.insert(i);
        cout<<TSP(arr,s,0)<<"\n";
    }
}
/*
1
3
2000
6000
7000
3000
8000
3000
5000
9000
1000
8000
4000
1000
*/
