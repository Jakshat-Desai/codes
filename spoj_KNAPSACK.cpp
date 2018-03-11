#include<bits/stdc++.h>
using namespace std;
struct obj{int wt;int val;};
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int s,n;cin>>s>>n;obj objects[n];
  for(int i=0;i<n;i++)cin>>objects[i].wt>>objects[i].val;
  int arr[n][s];for(int i=0;i<n;i++)for(int j=0;j<s;j++)arr[i][j]=0;
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<s;j++)
    {
      if(j+1>=objects[i].wt)
      {
        if(j+1==objects[i].wt)
        {
          if(i>0)#include<bits/stdc++.h>
using namespace std;
struct obj{int wt;int val;};
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int s,n;cin>>s>>n;obj objects[n];
  for(int i=0;i<n;i++)cin>>objects[i].wt>>objects[i].val;
  int arr[n][s];for(int i=0;i<n;i++)for(int j=0;j<s;j++)arr[i][j]=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<s;j++)
    {
      if(j+1>=objects[i].wt)
      {
        if(j+1==objects[i].wt)
        {
          if(i>0)
          {
          if(objects[i].val>arr[i-1][j]) arr[i][j]=objects[i].val;
          else arr[i][j]=arr[i-1][j];
          }
          else arr[i][j]=objects[i].val;
        }
        else if(j+1>objects[i].wt)
        {
          if(i==0)arr[i][j]=objects[i].val;
          else
          {
            if(arr[i-1][j]<arr[i-1][j-objects[i].wt]+objects[i].val) arr[i][j]=arr[i-1][j-objects[i].wt]+objects[i].val;
            else arr[i][j]=arr[i-1][j];
          }
        }
        else arr[i][j]=objects[i].val;
      }
      else if(i>0)arr[i][j]=arr[i-1][j];
    }
  cout<<arr[n-1][s-1];
}

          {
          if(objects[i].val>arr[i-1][j])
          {
            arr[i][j]=objects[i].val;
          }
          }
          else
          {
            arr[i][j]=objects[i].val;
          }
        }
        else if(j+1>objects[i].wt)
        {
          if(i==0)
          {
            arr[i][j]=objects[i].val;
          }
          else
          {
            if(arr[i-1][j]<arr[i-1][j-objects[i].wt]+objects[i].val)
            {
              arr[i][j]=arr[i-1][j-objects[i].wt]+objects[i].val;
            }
            else
            {
              arr[i][j]=arr[i-1][j];
            }
          }
        }
        else
        {
          arr[i][j]=objects[i].val;
        }
      }
      else if(i>0)
      {
        arr[i][j]=arr[i-1][j];
      }
    }
  }
  cout<<arr[n-1][s-1];
}
