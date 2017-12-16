#include<bits/stdc++.h>
using namespace std;
int spf[1000006];
bool prime[1000006];

void sieve()
{
  for(int i=0;i<1000006;i++)
  {
    spf[i]=i;
    prime[i]=true;
  }
  prime[0]=false;
  prime[1]=false;
  for(int i=2;i<1000005;i++)
  {
    if(prime[i])
    {
      for(int j=i*i;j<1000006;j+=i)
      {
        prime[j]=false;
        if(i<spf[j])
        {
          spf[j]=i;
        }
      }
    }
  }
}

int gcd(int a, int b)
{
if(!b)
{
return a;
}
return gcd(b,a%b);
}

int factors(int c, int d)
{
  int a=gcd(c,d);
  map<int,int> m;
  map<int,int>::iterator it; 
  while(a>1)
  {
    int x=spf[a];
    m[x]=m[x]+1;
    a=a/x;
  }
  int fac=1;
  for(it=m.begin();it!=m.end();it++)
  {
    fac*=(it->second)+1;
  }
  return fac;
}

int main()
{
  sieve();
  int t;
  cin>>t;
  for(;t>0;t--)
  {
    int a,b;
    cin>>a>>b;
    int c=factors(a,b);
    cout<<c<<"\n";
  }
}
