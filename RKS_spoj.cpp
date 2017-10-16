#include<bits/stdc++.h>
using namespace std;
map<int, int> m1;
map<int, int> m2;
bool compare(int a, int b)
{
    if(m2[a]>m2[b])
    {
        return true;
    }
    else if(m2[a]<m2[b])
    {
        return false;
    }
    else if(m2[a]==m2[b] && m1[a]<m1[b])
    {
        return true;
    }
    return false;
}
int main()
{
int l,c,x,i=0;
cin>>l>>c;
int v[l];
for(i=0;i<l;i++)
{
    cin>>x;
    if(m1[x]==0)
    {
        m1[x]=i+1;
    }
    if(m2[x]==0)
    {
        m2[x]=1;
    }
    else
    {
        m2[x]+=1;
    }
    v[i]=x;
}
sort(v,v+l,compare);
for(i=0;i<l;i++)
    cout<<v[i]<<" ";
}
