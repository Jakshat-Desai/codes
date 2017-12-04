#include<bits/stdc++.h>
using namespace std;
bool prime[10000];
void sieve()
{
 memset(prime,true,sizeof(bool)*10000);
 prime[0]=false;
 prime[1]=false;
  for(int i=2;i<9999;i++)
  {
    if(prime[i])
    {
      for(int j=i*i;j<10000;j+=i)
      {
        prime[j]=false;
      }
    }
  }
}
int INT(int arr[4])
{
  int x=0;
  for(int i=0;i<4;i++)
  {
    x+=arr[i]*pow(10,3-i);
  }
  return x;
}
void ARR(int arr[4],int x)
{
  for(int i=3;i>=0;i--)
  {
    arr[i]=x%10;
    x/=10;
  }
}
int bfs(int a, int b)
{
  queue<int> q;
  q.push(a);
  int vis[10000];
  memset(vis,0,sizeof(int)*10000);
  vis[a]=1;
  int arr[4];
  int arr1[4];
  while(!q.empty())
  {
    int x=q.front();
    q.pop();
    ARR(arr,x);
    for(int i=0;i<=3;i++)
    {
      ARR(arr1,x);
      for(int j=0;j<=9;j++)
      {
        if(j==arr[i] || (i==0 && j==0))
        {
          continue;
        }
        arr1[i]=j;
        int k=INT(arr1);
        if(prime[k])
        if(vis[k]==0)
        {
          vis[k]=vis[x]+1;
          q.push(k);
        }
      }
    }
  }
  return vis[b]-1;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sieve();
  int t;
  cin>>t;
  for(;t>0;t--)
  {
    int a,b;
    cin>>a>>b;
   int k=bfs(a,b);
   if(k==-1)
    {
      cout<<"Impossible\n";
    }
    else
    {
      cout<<k<<"\n";
    }
  }
}
