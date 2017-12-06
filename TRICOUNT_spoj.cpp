#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(;t>0;t--)
{
long long int n;
cin>>n;
long long int sum=0;
sum=(n*(n+2)*(2*n+1))/8;
cout<<sum<<"\n";
}
}
