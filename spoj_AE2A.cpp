#include<bits/stdc++.h>
using namespace std;
vector<vector<float> > memo;
float unlucky(int n, int k)
{
    if(n==0 && k==0)return memo[n][k]=1;
    else if(n==0 && k!=0) return (k>0)?(memo[n][k]=0):0;
    else if(k<=0 && n>0) return (k==0)?(memo[n][k]=0):0;

    if(memo[n][k]!=-1)return memo[n][k];
    float ans=0;
    for(float i=1;i<=6;i++)
    {
        ans+=(1/6.0)*unlucky(n-1,k-i);
    }
    return memo[n][k]=ans;
}
void percent(int n, int k)
{
    cout<<(int)(unlucky(n,k)*100)<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    memo.assign(547,vector<float>(1910,-1));
    for(;t>0;t--)
    {
        int n,k; cin>>n>>k;
        if(n>=547 || k>=1910){cout<<"0\n"; continue;}
        percent(n,k);
    }
}
