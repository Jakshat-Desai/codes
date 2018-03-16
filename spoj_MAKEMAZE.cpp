#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char> > grap, int m, int n, int stx, int sty)
{
    stack<pair<int,int> > s; s.push({stx,sty});
    set<pair<int,int> > visited; visited.insert({stx,sty});
    int count_=0;
    while(!s.empty()){
        pair<int, int> p; p=s.top(); s.pop();
        int i,j; i=p.first; j=p.second;
        if(count_>1){
            cout<<count_<<"\n";
            cout<<"invalid\n";
            return;}
        if(i<m-1){
            if(visited.find({i+1,j})==visited.end() && grap[i+1][j]=='.'){
                if(i+1==0 || j==0 || i+1==m-1 || j==n-1) count_++;
                visited.insert({i+1,j});
                s.push({i+1,j});}}
        if(j<n-1){
            if(visited.find({i,j+1})==visited.end() && grap[i][j+1]=='.'){
                if(i==0 || j+1==0 || i==m-1 || j+1==n-1)
                count_++;
                visited.insert({i,j+1});
                s.push({i,j+1});}}
        if(i>0){
            if(visited.find({i-1,j})==visited.end() && grap[i-1][j]=='.'){
                if(i-1==0 || j==0 || i-1==m-1 || j==n-1)
                count_++;
                visited.insert({i-1,j});
                s.push({i-1,j});}}
        if(j>0){
            if(visited.find({i,j-1})==visited.end() && grap[i][j-1]=='.'){
                if(i==0 || j-1==0 || i==m-1 || j-1==n-1)
                count_++;
                visited.insert({i,j-1});
                s.push({i,j-1});}}
        }
    if(count_==1) cout<<"valid\n";
    else cout<<"invalid\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    for(;t>0;t--){
        int m,n; cin>>m>>n;
        vector<vector<char> > grap(m);
        int count_=0, a=-1,b=-1;
        for(int i=0;i<m;i++)for(int j=0;j<n;j++){
            char x; cin>>x; grap[i].push_back(x);
            if(x=='.') if(i==0 || j==0 || i==m-1 || j==n-1){a=i;b=j;count_++;}
            }
        if(count_!=2){
        cout<<"invalid\n";
        continue;}
        dfs(grap,m,n,a,b);
    }
}
