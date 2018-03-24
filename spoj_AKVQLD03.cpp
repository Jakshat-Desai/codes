#include<bits/stdc++.h>
using namespace std;
/*returns the next node of the tree which contains the sum of one or two indices immediately following the last index whose value is
considered in the sum at the current node*/
int getNext(int index)
{
    return index+(index & -index);
}
/*returns the parent node of the current node(exact opposite of getNext method)*/
int getParent(int index)
{
    return index-(index & -index);
}
/*returns the sum from 0th index of fenwick tree till index*/
int sum(int index, vector<int> &fenwick)
{
    int ans=0;
    for(int i=index;i>0;i=getParent(i)) ans+=fenwick[i];
    return ans;
}
/*increments the value at index by val and also adds val to the sums which consist of index*/
void update(int index, vector<int> &fenwick, int val)
{
    for(int i=index;i<fenwick.size();i=getNext(i)) fenwick[i]+=val;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,q,a,b; string query; cin>>n>>q; vector<int> fenwick(n+1,0);
    for(int i=0;i<q;i++)
    {
        cin>>query>>a>>b;
        //finding sum from a to b query
        if(query[0]=='f') cout<<sum(b,fenwick)-sum(a-1,fenwick)<<"\n";
        //updation query
        else update(a,fenwick,b);
    }
}
