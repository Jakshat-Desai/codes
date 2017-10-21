#include<bits/stdc++.h>
using namespace std;
#define const 10000007
long long int modpow(long long int p,long long int pow)
{
    long long int base=p;
    long long int r=1;
    base=base%const;
    while(pow>0)
    {
        if(pow&1)
        {
            r=(r*base)%const;
        }
        pow=pow>>1;
        base=(base*base)%const;
    }
    return r;
}
long long int ans(long long int n,long long int k)
{
    return (modpow(n,k)+modpow(n,n)+(2*modpow(n-1,k))%const+(2*modpow(n-1,n-1))%const)%const;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do
    {
    long long int n,k;
    cin>>n>>k;
    if(n==0 && k==0)
    {
        break;
    }
    cout<<ans(n,k)<<"\n";
    }while(1);
}
