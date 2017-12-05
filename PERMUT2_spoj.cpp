#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
while(true)
{
int n,i;
cin>>n;
if(n==0)
break;
int arr[n];
for(i=0;i<n;i++)
  cin>>arr[i];
int flag=0;
for(i=0;i<n;i++)
{
if(arr[arr[i]-1]!=i+1)
{
flag=1;
cout<<"not ambiguous\n";
break;
}
}
if(!flag)
{
cout<<"ambiguous\n";
}
}
}
