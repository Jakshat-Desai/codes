#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
while(true)
{
int t;
cin>>t;
if(t==0)
{
return 0;
}
int sum=0;
for(int i=1;i<=t;i++)
{
sum+=pow(i,2);
}
cout<<sum<<"\n";
}
}
