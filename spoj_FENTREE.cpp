#include<bits/stdc++.h>
using namespace std;
vector<long long int> fenwick;
int getParent(int index)
{
    return index-(index & -index);
}
int getNext(int index)
{
    return index+(index & -index);
}
long long int sum(int index)
{
    long long int sum_=0;
    for(int i=index;i>0;i=getParent(i))
        sum_+=fenwick[i];
    return sum_;
}
void update(int index, int val)
{
    for(int i=index;i<fenwick.size();i=getNext(i))
        fenwick[i]+=val;
}
int main()
{
    int n,q; cin>>n;
    fenwick.assign(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>q;
        update(i,q);
    }
    cin>>q;
    char s;int a,b;
    for(int i=0;i<q;i++)
    {
        cin>>s>>a>>b;
        if(s=='q') cout<<sum(b)-sum(a-1)<<"\n";
        else update(a,b);
    }
}
