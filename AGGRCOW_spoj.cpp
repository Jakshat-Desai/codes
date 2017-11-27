#include<bits/stdc++.h>
using namespace std;
int f(int arr[], int n, int c, int x)
{
int count=1;
int j=0;
  for(int i=1;i<n;i++)
  {
    if(arr[i]-arr[j]>=x)
    {
      j=i;
      count++;
    }
    if(count==c)
    {
      return 1;
    }
  }
  return 0;
}
int bin(int arr[],int start, int end, int n, int c)
{
  if(end-start<=1)
  {
    return start;
  }
  int mid=(start+end)/2;
  if(f(arr,n,c,mid))
  {
    bin(arr,mid,end,n,c);
  }
  else
  {
    bin(arr,start,mid,n,c);
  }
}
int main()
{
  int t;
  cin>>t;
  for(;t>0;t--)
  {
    int n,c;
    cin>>n>>c;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<bin(arr,arr[0],arr[n-1],n,c)<<"\n";
  }
}
