#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,i;
    cin>>x;
    long long int base,m,exp;
    for(i=1;i<=x;i++)
    {
    long long int r=1;
    cin>>base>>exp>>m;
    base=base%m;
    while(exp>0)
    {
        if(exp&1)
        {
            r=(r*base)%m;
        }
        exp=exp>>1;
        base=(base*base)%m;
    }
    cout<<i<<". "<<r<<"\n";
    }
}
