#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
scanf("%d%d",&n,&m);
int arr[m][2];
int i=0,c=0;
for(;i<m;i++)
{
scanf("%d%d",&arr[i][0],&arr[i][1]);
}
int arr1[n];
for(i=1;i<=n;i++)
{
arr1[i-1]=1;
}
for(i=m;i>=1;i--)
{
arr1[arr[i-1][1]-1]+=arr1[i];
}
for(i=1;i<n;i++)
{
if(arr1[i-1]%2==0)
{
c+=1;
}
}
printf("%d",c-1);
}
