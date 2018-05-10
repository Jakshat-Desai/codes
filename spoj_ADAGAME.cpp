#include<bits/stdc++.h>
using namespace std;
int number, turns;
int increment(int x, int i)
{
    int arr[4];
    arr[0]=x/1000;
    arr[1]=x/100-arr[0]*10;
    arr[2]=(x%100)/10;
    arr[3]=x%10;
    if(arr[i]<9)arr[i]++;
    else arr[i]=0;
    return arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
}
bool solve(int num, int tur, vector<vector<int> > &memo, set<pair<int,int> > &s)
{
    s.insert({num,tur});
    if(tur==turns)
    {   if(num>number) return true;
        else return false;}
    if(memo[num][tur]!=-1)return memo[num][tur];
    bool ans;
    if(tur%2==0)
    {   ans=false;
        for(int i=0;i<4;i++)
        {ans=ans||solve(increment(num,i),tur+1,memo,s);

        }}
    else
    {   ans=true;
        for(int i=0;i<4;i++) ans=ans&&solve(increment(num,i),tur+1,memo,s);}
    return memo[num][tur]=ans;
}
void clear(vector<vector<int> > &memo, set<pair<int,int> > s)
{
    while(!s.empty())
    {   memo[s.begin()->first][s.begin()->second]=-1;
        s.erase(s.begin());}
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    vector<vector<int> > memo(10000,vector<int>(101,-1));
    for(;t>0;t--)
    {
        cin>>number>>turns;
        set<pair<int,int> > s;
        if(solve(number,0,memo,s))cout<<"Ada\n";
        else cout<<"Vinit\n";
        clear(memo,s);
    }
}
