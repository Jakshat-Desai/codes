#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(;t>0;t--)
    {
        int n,k; cin>>k>>n; int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
        vector<int> dis(n,100007); for(int i=0;i<n && i<n;i++)if(arr[i]!=-1)dis[i]=arr[i];
        //the dis array stores the min cost to buy exactly i+1 kg of apples at ith index
        for(int i=0;i<n;i++) for(int j=0;j<n;j++)
                if(i-j-1>=0 && arr[i-j-1]!=-1) dis[i]=min(dis[i],dis[j]+arr[i-j-1]);
        if(dis[n-1]<100005)
        cout<<dis[n-1]<<"\n";
        else
        cout<<"-1\n";
    }
}
