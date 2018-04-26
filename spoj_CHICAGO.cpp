#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(1){
    int n,m; cin>>n;
    if(n==0)break;
    cin>>m;
    vector<vector<double> > arr(n,vector<double>(n,0));
    int i,j; float k;
    for(int x=0;x<m;x++){ cin>>i>>j>>k; arr[i-1][j-1]=arr[j-1][i-1]=0.01*k; }
    for(k=0;k<n;k++)for(i=0;i<n;i++)for(j=0;j<n;j++)
    {
        if(arr[i][j]<arr[i][k]*arr[k][j])
            arr[i][j]=arr[i][k]*arr[k][j];
    }
    cout<<fixed<<setprecision(6)<<arr[0][n-1]*100<<" percent\n";
    }
}
