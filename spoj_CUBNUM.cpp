#include<bits/stdc++.h>
using namespace std;
vector<int> memo(100001);
int cubes[47];
void ans()
{
    for(int j=0;j<memo.size();j++)
    for(int i=46;i>=0;i--)
    {
        if(j-cubes[i]>=0)
        memo[j]=min(memo[j],memo[j-cubes[i]]+1);
    }
}
int main()
{
    for(int i=0;i<memo.size();i++)memo[i]=i;
    for(int i=0;i<47;i++) cubes[i]=pow(i,3);
    int i=1;
    int n;
    ans();
    while(cin>>n)
    {
        cout<<"Case #"<<i++<<": "<<memo[n]<<"\n";
    }
}
