#include<bits/stdc++.h>
# define z 1000001
using namespace std;
int main()
{
    int etf[z];
    long long int i=0,j=0;
    for(i=0; i<z; i++)
    {
        etf[i]=i;
    }
    for(i=2;i<z;i++)
    {
        if(etf[i]==i)
            for(j=i;j<z;j+=i)
            {
                etf[j]-=etf[j]/i;
            }
    }
    int t;
    long long int k;
    cin>>t;
    for(;t>0;t--)
    {
        cin>>k;
        cout<<etf[k]<<"\n";
    }
}
