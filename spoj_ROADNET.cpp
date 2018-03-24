#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for(;t>0;t--)
    {
        int n; cin>>n; int arr[n][n]; set<pair<int,int> > s;
        for(int i=0;i<n;i++)for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(i!=j)
                {int a,b;b=min(i,j);a=max(i,j);
                s.insert({b,a});}
        }
        for(int k=0;k<n;k++)
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                {
                    if(arr[i][j]==arr[i][k]+arr[k][j] && i!=j && j!=k && k!=i)
                    {
                        int a=max(i,j);
                        int b=min(i,j);
                        if(s.find({b,a})!=s.end())
                            {
                                s.erase({b,a});
                            }
                    }
                }
        while(!s.empty())
        {
            cout<<s.begin()->first+1<<" "<<s.begin()->second+1<<"\n";
            s.erase(s.begin());
        }
    }
}
