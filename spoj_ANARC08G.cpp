#include<bits/stdc++.h>
using namespace std;
void answer_func(int n, int ind)
{
    int ans=0, sum=0;
    int grap[n][n]; for(int i=0;i<n;i++) for(int j=0;j<n;j++)
    {
        cin>>grap[i][j];
        sum+=grap[i][j];
    }
    vector<int> net(n,0);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++)
    {
        net[i]+=grap[i][j];
        net[j]-=grap[i][j];
    }
    for(int i=0;i<n;i++)
        ans+=(net[i]>0)?net[i]:0;
    cout<<ind<<". "<<sum<<" "<<ans<<"\n";
}
int main()
{
    int i=1;
    while(1)
    {
        int n; cin>>n; if(!n) break;
        answer_func(n,i); i++;
    }
}
