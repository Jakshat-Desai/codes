#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
set<int> s;
int k;
cin>>n;
k=n;
for(;k>0;k--)
{
int x,y;
cin>>x>>y;
s.insert(x);
for(;y>0;y--)
{
cin>>x;
s.insert(x);
}
}
cout<<s.size()-n;
}
