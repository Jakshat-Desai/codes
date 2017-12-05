#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(true);
cin.tie(NULL);
int t;
cin>>t;
for(;t>0;t--)
{
string c;
int x=0;
cin>>c;
for(int i=0;i<c.length();i++)
{
	x+=int(c[i]-'0');
}
cout<<x<<"\n";
}
}
