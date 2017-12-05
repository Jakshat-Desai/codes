#include<bits/stdc++.h>
using namespace std;
int INT(char c)
{
if(c=='T')
return 0;
else
return 1;
}
int main()
{
int t;
cin>>t;
int arr[8];
for(;t>0;t--)
{
int n;
string s;
int arr[8];
memset(arr,0,sizeof(int)*8);
cin>>n>>s;
for(int i=0;i<=37;i++)
{
int k=(int)((INT(s[i])*4)+(INT(s[i+1])*2)+(INT(s[i+2])*1));
arr[k]++;
}
cout<<n<<" ";
for(int i=0;i<8;i++)
{
cout<<arr[i]<<" ";
}
cout<<"\n";
}
}
