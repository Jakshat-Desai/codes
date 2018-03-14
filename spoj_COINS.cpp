#include<bits/stdc++.h>
using namespace std;
map<int,long long int> m;
long long int cost(int x)
{
    if(m[x]==0 && x!=0)
    {
        m[x]=cost(x/2)+cost(x/3)+cost(x/4);
        //cout<<x<<"="<<x/2<<"+"<<x/3<<"+"<<x/4<<"\n";
        if(m[x]<x)
        {
            m[x]=x;
        }
    }
    return m[x];
}
int main()
{
    int x;
    m[0]=0;
    m[1]=1;
    m[2]=2;
    m[3]=3;
    m[4]=4;
    while(cin>>x)
    {
        cout<<cost(x)<<"\n";
    }
}
